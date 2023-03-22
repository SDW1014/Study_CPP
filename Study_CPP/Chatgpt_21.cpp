#include "Chatgpt_21.h"

void Chatgpt_main_Print(string myS)
{
	for (int i = 0; i < myS.size(); i++)
		cout << myS[i];
	cout << endl;
	for (int i = myS.size(); i > 0; i--)
		cout << myS[i - 1];
}

void Chatgpt_main()
{
	string s;
	cout << "문자열을 입력 해주세요 : ";
	getline(cin,s);
	Chatgpt_main_Print(s);
}

void Chatgpt_21()
{
	string s;
	Chatgpt_main();
}
