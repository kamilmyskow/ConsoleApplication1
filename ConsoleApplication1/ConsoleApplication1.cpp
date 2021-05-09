// CPP program to demonstrate Morse code
#include <iostream>
using namespace std;

// function to encode a alphabet as
// Morse code
string morseEncode(char x)
{

	// refer to the Morse table
	// image attached in the article
	switch (x) {
	
	case '1':
		return ".----";
	case '2':
		return "..---";
	case '3':
		return "...--";
	case '4':
		return "....-";
	case '5':
		return ".....";
	case '6':
		return "-....";
	case '7':
		return "--...";
	case '8':
		return "---..";
	case '9':
		return "----.";
	case '0':
		return "-----";
	default:
		
		cerr << "Found invalid character: " << x << ' '
			<< std::endl;
		

		exit(0);
	}
}

string morseCode(string s)
{
	string z;
	// character by character print
	// Morse code
	for (int i = 0; s[i]; i++)
		z+= morseEncode(s[i]);
	cout<< z << endl;
	return z;
}

// Driver's code
int main()
{
	string s = "45"; 
	morseCode(s);
	return 0;
}
