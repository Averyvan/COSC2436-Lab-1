// Author: Avery VanAusdal
// Assignment Number: Lab 1
// File Name: Driver.cpp
// Course/Section: COSC 1337 Section 3
// Date: 8/30/2018
// Instructor: Bernard Ku
#include "EncryptedString.h"
#include <iostream>

int main()
{
	EncryptedString str1;
	cout << "Empty string not encrypted: " << str1.get() << endl;
	cout << "Empty string     encrypted: " << str1.getEncrypted() << endl << endl;
	
	str1.set("abcd");
	cout << "'abcd' not encrypted: " << str1.get() << endl;
	cout << "'abcd'     encrypted: " << str1.getEncrypted() << endl << endl;
	
	EncryptedString str2("Hi Mom!");
	cout << "'Hi Mom!' not encrypted: " << str2.get() << endl;
	cout << "'Hi Mom!'     encrypted: " << str2.getEncrypted() << endl;
	cout << "Note: '!' is illegal and is removed\n" << endl;
	
	while (true) //input loop
	{
		cout<<"Enter a string to be encrypted (q to quit): ";
		string inputString;
		getline(cin, inputString);
		if (inputString == "q") {
			return 0;
		}
		EncryptedString str3(inputString);
		cout << inputString <<" not encrypted: " << str3.get() << endl;
		cout << inputString <<"     encrypted: " << str3.getEncrypted() << endl << endl;
	}
	
	return 0;
}

/*
Empty string not encrypted:
Empty string     encrypted:

'abcd' not encrypted: abcd
'abcd'     encrypted: bcde

'Hi Mom!' not encrypted: Hi Mom
'Hi Mom!'     encrypted: Ij Npn
Note: '!' is illegal and is removed

Enter a string to be encrypted (q to quit): user input!
user input! not encrypted: user input
user input!     encrypted: vtfs joqvu

Enter a string to be encrypted (q to quit): q

--------------------------------
Process exited after 25.4 seconds with return value 0
Press any key to continue . . .
*/
