// Author: Avery VanAusdal
// Assignment Number: Lab 1
// File Name: EncryptedString.cpp
// Course/Section: COSC 1337 Section 3
// Date: 8/30/2018
// Instructor: Bernard Ku
#include "EncryptedString.h"
#include <string>

EncryptedString::EncryptedString()
{
}

EncryptedString::EncryptedString(string inputString)
{
	set(inputString);
}

void EncryptedString::set(string inputString)
{
	myString = "";
	for (int i = 0; i < inputString.length(); i++)
	{
		char character = inputString[i];
		
		if (character == 'Z') //wrap around at end
		{
			myString += 'A';
		}
		else if (character == 'z') //lowercase wrap around
		{
			myString += 'a';
		}
		else if (isalpha(character))
		{
			myString += character+1;
		}
		else if (character == ' ')
		{
			myString += character;
		}
		//otherwise leave character out of myString
	}
}

//decrypt then return
string EncryptedString::get() const
{
	string resultString = "";
	for (int i = 0; i < myString.length(); i++)
	{
		char character = myString[i];
		
		if (character == 'A') //wrap around at end
		{
			resultString += 'Z';
		}
		else if (character == 'a') //lowercase wrap around
		{
			resultString += 'z';
		}
		else if (isalpha(character))
		{
			resultString += character-1;
		}
		else if (character == ' ')
		{
			resultString += character;
		}
	}
	return resultString;
}

string EncryptedString::getEncrypted() const
{
	return myString;
}
