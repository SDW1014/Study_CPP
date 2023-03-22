#include "Chatgpt_22.h"

void stringPrintFunction(string s)
{
	cout << s << endl;
}

void checkAndCheck(string s1, string s2)
{
	int d = 0;
	int roofSize = 0;
	string first = s2;
	string second = s1;
	int stringCheck = 0;
	int checkStartNumber = 0;
	if (s1.size() >= s2.size())
	{
		first = s1;
		second = s2;
	}
	for (int i = 0; i < first.size(); i++)
	{
		for (int j = 0; j < second.size(); j++)
		{
			if (first[i] == second[j])
			{
				int charCheck = 0;
				for (int k = 0; i+k < first.size(); k++)
				{
					if (j + k >= second.size())
						break;
					if (first[i + k] == second[j + k])
					{
						charCheck++;
					}
				}
				if (charCheck > stringCheck)
				{
					stringCheck = charCheck;
					checkStartNumber = i;
				}
			}

		}
	}
	if (stringCheck <= 1)
		cout << "";
	else
		for (int i = checkStartNumber; i < checkStartNumber + stringCheck; i++)
		{
			cout << first[i];
		}
	
	//abcdef
	//bdcdea
}

string input_and_return()
{
	string s;

	cout << "입력해 주세요. : ";
	cin >> s;
	return s;
}

void Chatgpt_22()
{
	checkAndCheck(input_and_return(), input_and_return());
}
