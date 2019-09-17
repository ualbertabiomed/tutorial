#include <iostream>
#include <string>
#include <unistd.h>
#include <fstream>
#include <streambuf>
#include <ostream>

class teebuf
: public std::streambuf
{
    std::streambuf* sb1_;
    std::streambuf* sb2_;
    
    int overflow(int c) {
        typedef std::streambuf::traits_type traits;
        bool rc(true);
        if (!traits::eq_int_type(traits::eof(), c)) {
            traits::eq_int_type(this->sb1_->sputc(c), traits::eof())
            && (rc = false);
            traits::eq_int_type(this->sb2_->sputc(c), traits::eof())
            && (rc = false);
        }
        return rc? traits::not_eof(c): traits::eof();
    }
    int sync() {
        bool rc(false);
        this->sb1_->pubsync() != -1 || (rc = false);
        this->sb2_->pubsync() != -1 || (rc = false);
        return rc? -1: 0;
    }
public:
    teebuf(std::streambuf* sb1, std::streambuf* sb2)
    : sb1_(sb1), sb2_(sb2) {
    }
};

class oteestream
: private virtual teebuf
, public std::ostream {
public:
    oteestream(std::ostream& out1, std::ostream& out2)
    : teebuf(out1.rdbuf(), out2.rdbuf())
    , std::ostream(this) {
        this->init(this);
    }
};

std::ofstream fout("output.txt");
oteestream tee(fout,std::cout); 

void my_name_is(){
    std::string name;
        tee << "What is your name?" << std::endl;
        std::cin >> name;
        tee << "Hello World, my name is " << name << std::endl;
}

void fibonacci(){
    int sequence[20];
        sequence[0] = 0;
        sequence[1] = 1;
        tee << sequence[0] << " ";
        tee << sequence[1] << " ";
    for(int i = 0;i < 19; i++){
        sequence[i+2] = sequence[i] + sequence[i+1];
        tee << sequence[i+2] << " ";
        fflush(stdout);
        sleep(1);
        }
        tee << "task complete!" << std::endl;
}

int main(void){
    my_name_is();
    fibonacci();
    return 0;
}


