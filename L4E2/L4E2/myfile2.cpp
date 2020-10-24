#include "SetInt.h"
int main() {
	SetInt a; // object creation
	while (true)
	{
		cout << "add an element" << endl;
		int elem;
		cin >> elem;
		a.add(elem);
		cout << "add an other element" << endl;
		cout << "(Y)es/(N)o :" << endl;
		string chain;
		getline(cin, chain);// reads a sequence of characters ending with an end of line and store it in the chain
		 //object (end of line not included)
		if (chain[0] == 'n' || 'N')break;
	}
	return 0;
}
