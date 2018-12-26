#include <fstream>  // Needed for file stream objects
#include <iostream> // Needed for console stream objects
#include <sstream>  // Needed for string stream objects
#include <string>   // Needed for strings
#include <vector>   // Needed for the vector container

// Attached is a file menu.txt. Each line contains
// the Description of a food item, it's Price and
// the number of Calories contained in said dish.

// Your task is to parse this file and display
// the Description, Price and Calories on
// separate lines on standard output.

// Use file streams to read in lines from the file
// into a string variable. Then use string streams
// to tokenize each word on the line. You may need
// to use a container in this tut.

// Pull in class and variables from the standard namespace
using namespace std;

int main(int argc, char * argv[])
{
	string filename = "menu.txt";

	// Open file with a file stream. ifstream constructor
	// wants a C char * string, so call c_str() method.
	ifstream in(filename.c_str());

	if(!in)
		{ cout << "Couldn't open " << filename << endl; }

	// Close file
	in.close();

	return 0;
}
