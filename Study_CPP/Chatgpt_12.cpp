#include "Chatgpt_12.h"


bool palindromeCheck(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i])
		{
			case ' ':
				return true;
			case '!':
				return true;
			case ',':
				return true;
		}
	}
	return false;
}

bool palindromeCheck_2(string s)
{
	if (s[0] == s[s.length()-1])
		return true;
	return false;
}

void Chatgpt_12()
{
	string s;
	cout << "ÀÔ·ÂÇØºÁ : ";
	getline(cin, s);
	(palindromeCheck_2(s) == true) ? cout << "ÆÈ¸°µå·Ò" : cout << "ÆÈ¸°µå·Ò¾Æ´Ô";
}
