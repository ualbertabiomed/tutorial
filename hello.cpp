/*
Biomed Tutorial Task - C++
Jehanzeb Mirza
*/

#include <iostream>
#include <string>

// The only cross platform solution which lets a thread sleep is using
// the threading library. Its interesting how much, yet little, is in C++
#include <thread>
#include <chrono>

/*
    @brief: Computes and displays Fibonaci numbers
    @param: {int n} Displays upto n numbers
*/
void fib(int n){
    int n1 = 1;
    int n2 = 1;
    int next_number;

    for (int i=0; i<n; i++){
        // Display and Sleep
        std::cout << n1 << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(80));

        // Compute Next number, shift everything over
        // n1 <- n2 <- n1 + n2

        next_number = n1 + n2;
        n1 = n2;
        n2 = next_number;
    }
}

/*
    @brief: Displays a hello world prompt with the users name
*/
void prompter(){
    std::string name;

    std::cout << "Please Enter Your Name: ";
    std::cin >> name;
    std::cout << "Hello world! My name is " << name << "!" << std::endl;
}

/*
    @brief: Main entry point for code
*/
int main(){
    prompter();
    fib(20);
    std::cout << "Task Completed!" << std::endl;
    return 0;
}
