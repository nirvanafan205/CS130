#include <iostream>
#include <bitset>
#include <sstream>
#include <iterator>

using namespace std;

int main()
{
	cout << "Enter a 4 character long string" << endl;

	string input; //input

	cin >> input;

	cout << "\n";

	int count = input.length();

	while(count > 4)
	{
		cout << "Re-enter string" << endl;
		cin >> input;
		count = input.length();
	}

	cout << "String entered: " << input << endl;

	int D = 0;

	cout << "\nDEC: "; 

	while(D != 4) //converts do decimal
	{
		int check = input[D];
		cout << check << " ";
		D++;
	}

	cout << endl;

	int H = 0;

	cout << "\nHEX: "; 

	while(H != 4) //converts to hex
	{
		int check = input[H];
		cout << hex << int(check) << " ";
		H++;
	}

	cout << endl;

	int B = 0;

	cout << "\nBIN: " ;

	while(B != 4) //converts to binary 
	{
		char letter = input[B];
		cout << bitset<8>(letter).to_string() << " ";
		B++;
	}

	cout << endl;
}

/*
Write a C/C++ console program to convert a char or a char string to its decimal, 
hexadecimal, and binary ASCII values. Input validation is required. The user must enter a string from 
one to 4 char's long. If anything else is entered, let the user know and give him/her the opportunity to 
reenter a valid string 
*/
