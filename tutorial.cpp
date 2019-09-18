#include <iostream>
#include <string>
#include <unistd.h>
#include <fstream>

std::ofstream myfile;


/* This function will compute the Fibonacci sequence
 @param n (int n) how many numbers will be computed
 */

void fib(int n){
  // there are two special cases got the sequence, and that is the first two
  // numbers, so I will code them in and then run the algorithm
  if (n == 0){
    std::cout << 0 << std::endl;
    myfile << 0;
    myfile << "\n";
  } else {
      std::cout << 0 << std::endl;
      myfile << 0;
      myfile << "\n";
      sleep(1);
      std::cout << 1 << std::endl;
      myfile << 0;
      myfile << "\n";
      int current = 1;
      int last = 0;
      for (int i = 2; i < n; i++){
      // will update the current and last values then output the current
          int temp = current;
          current += last;
          last = temp;
          sleep(1);
          std::cout << current << std::endl;
          myfile << current;
          myfile << "\n";
      }
    }
  std::cout << "Task Complete!" << std::endl;
  myfile << "Task Complete!\n";

}
/* This function will ask the user their name and then greet them
  */
  void greeting() {
    // prompt the user to input their name
    std::cout << "What is you name: ";
    myfile << "What is you name: ";
    myfile << "\n";
    std::string name;
    std::cin >> name;
    std::cout << "Hello World, my name is " + name << std::endl;
    myfile << "Hello World, my name is " + name;
    myfile << "\n";
    sleep(1);
  }

int main () {
  myfile.open("tutorial.txt");
  greeting();
  fib(20);
  myfile.close();
  return 0;

}
