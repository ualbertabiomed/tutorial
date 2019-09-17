#include <iostream>
#include <windows.h>

//U of A Biomed tutorial Task 
using namespace std;


//Function protoype
void hello();
void fibonacci();

int main(){
	//HELLO WORLD_____________________________________
	hello();
	
	
	//FIBONACII_______________________________________
	cout<< "Here's the first 20 numbers in the fibonacci sequence : " << endl;
	fibonacci();
	
	
	// The output for this program is in the output.txt file
	
	return 0;
}

//Hello Function
void hello(){
	//Ask user for his/her name
	cout << "Enter your name: " << endl;
	string name;
	getline(cin, name) ;
	
	cout << "Hello World, my name is " + name << endl ;
}

//fibonacci function
void fibonacci(){
	
	int fibonaccNums[20] = {};
	for (int i = 0; i < 20; i++ ){
		if(i > 1){
			fibonaccNums[i] = fibonaccNums[i-2] + fibonaccNums[i-1];
		}else{
			fibonaccNums[i] = i;
		}
		Sleep(1000);
		cout << fibonaccNums[i] << endl;
	};
	
	cout << "Task Complete" << endl;

	
}