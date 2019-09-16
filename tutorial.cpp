#include <iostream>
#include <string>

void fib(int n){
  int current = 1;
  int last = 0;
  std::cout << 0 << std::endl;
  std::cout << 1 << std::endl;
  for (int i = 2; i < n; i++){
      int temp = current;
      current += last;
      last = temp;
      std::cout << current << std::endl;
    }

  }

int main () {
  // prompt the user to input their name
  std::cout << "What is you name: ";
  std::string name;
  std::cin >> name;
  std::cout << "Hello World, my name is " + name << std::endl;
  fib(20);

}
