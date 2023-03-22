#include "Chatgpt_25.h"

bool checkString(string s1, string s2)
{
	for (int i = 0; i < s2.size(); i++)
	{
		if (s1[0] == s2[i])
		{
			int check = 1;
			for (int j = 1; j < s1.size(); j++)
			{
				if (s1[j] == s2[(i + j>=s2.size())?i+j-s2.size():i+j])
				{
					check++;
				}
			}
			if (check == s1.size())
				return true;
		}
	}
	return false;
}

bool checkString_2(string s1, string s2)
{
	s2 = s2 + s2;

	return s2.find(s1) != string::npos;
}

void Chatgpt_25()
{
	if (checkString_2("waterbottle", "erbottlewat"))
	{
		cout << "¸ÂÀ½";
	}
	else { cout << "¾Æ´Õ"; }
}
