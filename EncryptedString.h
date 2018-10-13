// Author: Avery VanAusdal
// Assignment Number: Lab 1
// File Name: EncryptedString.h
// Course/Section: COSC 1337 Section 3
// Date: 8/30/2018
// Instructor: Bernard Ku
#ifndef ENCRYPTEDSTRING_H
#define ENCRYPTEDSTRING_H
#include <string>
using namespace std;

class EncryptedString
{
	private:
		string myString;
	public:
		EncryptedString();
		EncryptedString(string);
		void set(string);
		string get() const;
		string getEncrypted() const;
};
#include "EncryptedString.cpp"
#endif
