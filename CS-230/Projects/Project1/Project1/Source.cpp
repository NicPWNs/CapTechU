//Nicholas Jones
//CS-230
//Project01

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

char rot13(char);

int main()
{
	ifstream input;
	ofstream output;

	cout << "ROT13 IO Program" << endl;
	cout << "================\n" << endl;

	input.open("input.txt");
	if (input.is_open())
	{
		cout << "Successfully Opened Input File!" << endl;
	}
	else
	{
		cout << "Failed to Open Input File!" << endl;
		return 1;
	}

	output.open("output.txt");
	if (output.is_open())
	{
		cout << "Successfully Opened Output File!" << endl;
	}
	else
	{
		cout << "Failed to Open Output File!" << endl;
		return 1;
	}

	char c;
	char o[100];
	int x = 0;
	int z = 0;

	cout << "\nCiphertext: ";
	while (input.get(c))
	{
		cout << c;
		c = rot13(c);
		output.put(c);
		o[x] = c;
		x++;
	}

	cout << "\nPlaintext: ";
	while (z < x)
	{
		cout << o[z];
		z++;
	}
	cout << "\n";

	input.close();
	output.close();

	return 0;
}

char rot13(char c)
{
	c = toupper(c);

	switch (c)
	{
		case 'A': return 'N';
		case 'B': return 'O';
		case 'C': return 'P';
		case 'D': return 'Q';
		case 'E': return 'R';
		case 'F': return 'S';
		case 'G': return 'T';
		case 'H': return 'U';
		case 'I': return 'V';
		case 'J': return 'W';
		case 'K': return 'X';
		case 'L': return 'Y';
		case 'M': return 'Z';
		case 'N': return 'A';
		case 'O': return 'B';
		case 'P': return 'C';
		case 'Q': return 'D';
		case 'R': return 'E';
		case 'S': return 'F';
		case 'T': return 'G';
		case 'U': return 'H';
		case 'V': return 'I';
		case 'W': return 'J';
		case 'X': return 'K';
		case 'Y': return 'L';
		case 'Z': return 'M';
		default: break;
	}

	return c;
}