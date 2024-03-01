#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	fstream myFile;

	// out for create
	// app for append or add to the file

	myFile.open("MyFile.txt", ios::out ); //append mode.

	if (myFile.is_open())
	{
		myFile << "Mohammed\n";
		myFile << "Ali\n";
		myFile << "Lama\n";

		myFile << "Hello this is a new line :-) \n";
		myFile << "Hello this is another new line :-) \n";

		myFile << "It's  a nice weather  today isn't it ? \n";

		myFile.close();
	}


	return 0;
}