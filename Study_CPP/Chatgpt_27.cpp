#include "Chatgpt_27.h"

string bTofString(string inputStringObject)
{
	stringstream sInputStringObject(inputStringObject);
	string interseptString;
	string token;
	while (sInputStringObject >> token)
	{
		interseptString = token + " " + interseptString;
	}

	return interseptString;
}

string inputString_Chatgpt_27()
{
	cout << "문자열을 입력해 주세요 : ";
	string myString;
	getline(cin,myString);
	return myString;
}

void Chatgpt_27()
{
	cout << bTofString(inputString_Chatgpt_27()) << endl;
}
