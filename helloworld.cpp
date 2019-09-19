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
	int fibonacci = 0;
	int ii = 0;
	int j = 1;
	string name;
	ofstream myfile;

	myfile.open("output.txt");

	cout << "Please enter your name: ";
	getline (cin, name);
	cout << "Hello World, my name is " << name << ".\n";
	
	/* For output.txt*/
	myfile<< "Please enter your name: ";
	myfile << name << endl;
	myfile << "Hello World, my name is " << name << ".\n";

	while (i < 20)
	{
		if (fibonacci == 0)
		{
			cout << ii << endl;
			Sleep(500);
			cout << j << endl;
			Sleep(500);
			i = 2;
		}
		fibonacci = ii + j;
		ii = j;
		j = fibonacci;
		cout << fibonacci << endl;
		Sleep(500);

	/*For output.txt*/
		myfile << fibonacci << endl;

		i++;
	}

	cout << "Tast Complete!";

	/*For output.txt*/
	myfile << "Tast Complete!";
	myfile.close();

	getchar();
	return 0;
}
