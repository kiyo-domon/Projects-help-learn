//declare preprocesor directives header fo;es
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//declare main function

int main()
{
	//varibale list
	int pass;
	int cpass;
	int size = 9999;

	ifstream inputFile;

	inputFile.open("passcrack.txt");

	inputFile >> pass;

	//above we opened a file and got our pasword from there;
	// now we will cycle through to see what the pass word exactly is

	cout << "We have the password\n";
	cout << "We will being proccesing to determine what it is...\n";
	cout << pass;




	inputFile.close();
	return 0;
}










