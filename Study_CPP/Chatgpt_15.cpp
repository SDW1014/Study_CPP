#include "Chatgpt_15.h"
#include <string>

void vowelRemover(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o')
			continue;
		cout << s[i];
	}
}

void Chatgpt_15()
{
	string s;
	cout << "문자열을 입력해주세요." << endl;
	getline(cin,s);
	vowelRemover(s);
}
