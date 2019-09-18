/*
@brief: This program asks user for their name, and prints "Hello World, my name is <name>".
		This program also prints out the Fibonacci sequence with 500 millisecond dealy, and putting all the output in output.txt.
*/

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;


	int main()
{
	int i = 0;
	int ii = 1;
	int j = 0; 
	int fibonacci = 0;
	string name;
	ofstream myfile;

	myfile.open("output.txt");

	cout << "Please enter your name: ";
	getline (cin, name);
	cout << "Hello World, my name is " << name << ".\n";
	
	/* For output.txt*/
	myfile<< "Please enter your name: ";
	myfile << "Hello World, my name is " << name << ".\n";

	while (i < 20)
	{
		cout << fibonacci << endl;
		fibonacci = ii + j;

		ii = j;
		j = fibonacci;
		Sleep(500);
		
	/*For output.txt*/
		myfile << fibonacci;

		i++;
	}

	cout << "Tast Complete!";

	/*For output.txt*/
	myfile << "Tast Complete!";

	getchar();
	return 0;
}
