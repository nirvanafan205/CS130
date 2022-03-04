#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "Enter a 4 character long string" << endl;

	string input;

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

	int i = 0;

	cout << "\nDEC: "; 

	while(i != 4)
	{
		int check = input[i];
		cout << check << " ";
		i++;
	}

	cout << endl;
}
