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
	int pcheck;
	int size = 9999;

	ifstream inputFile;

	inputFile.open("passcrack.txt");

	inputFile >> pass;

	//above we opened a file and got our pasword from there;
	// now we will cycle through to see what the pass word exactly is

	cout << "We have the password\n";
	cout << "We will being proccesing to determine what it is...\n";

	for (int i = 0; i < size; i++)
	{
		if (i == pass)
			pcheck = pass;

	}
	
	
	cout << "We have found password: " << pcheck << endl;





	inputFile.close();
	return 0;
}










