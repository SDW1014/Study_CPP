#include "Chatgpt_18.h"

bool anagramCheck_1(string s_1,string s_2)
{
	for (int i = 0; i < s_2.size(); i++)
	{
		for (int j = 0; j < s_1.size(); j++)
		{
			if (s_1[j] == s_2[i])
			{
				s_1.erase(j, 1);
				break;
			}	
		}
	}
	if (s_1.size() == 0)
		return true;
	return false;
}

bool anagramCheck_2(string s_1, string s_2)
{
	for (int i = 0; i < s_2.size(); i++)
	{
		for (int j = 0; j < s_1.size(); j++)
		{
			if (s_1[j] == s_2[i])
			{
				s_1.erase(j, 1);
				break;
			}
		}
	}
	return s_1.size() == 0;
}

void Chatgpt_18()
{
	string s_1;
	string s_2;
	cout << "¹®ÀÚ¿­ ³»³öºÁ : ";
	cin >> s_1;
	cout << "ºñ±³ÇÒ ¹®ÀÚ¿­µµ ³»³öºÁ : ";
	cin >> s_2;

	if (anagramCheck_1(s_1,s_2))
	{
		cout << "¸ÂÀ½";
	}
}