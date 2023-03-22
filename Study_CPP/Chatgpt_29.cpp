#include "Chatgpt_29.h"

void Chatgpt_29_String_1(string myString)
{
	for (int i = 0; i < myString.size(); i++)
	{
		if (myString[i] >= 'a' && myString[i] <= 'z')
		{
			cout << (char)(myString[i] + ('A' - 'a'));
		}
		else
			cout << myString[i];
	}
}
void Chatgpt_29_String_2(string myString)
{
	for (char &c : myString)
	{
		if (islower(c))
		{
			cout << static_cast<char>(toupper(c));
		}
		else
		{
			cout << c;
		}
	}
}

void Chatgpt_29()
{
	string myString;
	cout << "문자열 입력해.";
	getline(cin, myString);

	Chatgpt_29_String_2(myString);
}

