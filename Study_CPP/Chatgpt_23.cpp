#include "Chatgpt_23.h"
#include <sstream>

string tokenString(string inputString)
{
	stringstream myStringStream(inputString);

	string token;
	string result;
	while (myStringStream >> token)
	{
		result = token + " " + result;
	}
	return result;
}

string inputString()
{
	string myString;

	cout << "���ڿ� �Է��� : ";
	getline(cin,myString);
	return myString;
}

void Chatgpt_23()
{
	cout << tokenString(inputString());
}
