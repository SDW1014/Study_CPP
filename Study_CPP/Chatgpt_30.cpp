#include "Chatgpt_30.h"
#include <vector>
#include <algorithm>

class stringAndInt
{
private:
	string myString;
	int Setting;
public:
	stringAndInt(string s, int i) : myString(s), Setting(i) {}
	~stringAndInt() {}
	string stringcheck()
	{
		return myString;
	}
	int settingCheck()
	{
		return Setting;
	}
	void settingAdd()
	{
		Setting++;
	}
	bool operator<(stringAndInt& other)  
	{ 
		return Setting > other.settingCheck(); 
	}
};
//the the back tea to

string inputString_Chatgpt_30()
{
	string myString;
	cout << "문자열을 입력해 주세여 :";
	getline(cin, myString);
	return myString;
}

void inputString_Check_Chatgpt_30(string inputString)
{
	stringstream inputStringCheck(inputString);
	vector<stringAndInt> stringSaveList;
	string token;
	while (inputStringCheck >> token)
	{
		bool check = true;
		for (int i = 0; i < stringSaveList.size(); i++)
		{
			if (stringSaveList[i].stringcheck() == token)
			{
				stringSaveList[i].settingAdd();
				check = false;
			}
		}
		if (check)
		{
			stringSaveList.push_back(stringAndInt(token, 1));
		}
	}
	sort(stringSaveList.begin(), stringSaveList.end());
	for (int i = 0; i < stringSaveList.size(); i++)
	{
		if (stringSaveList[i].settingCheck() <= 2)
		{
			cout << stringSaveList[i].stringcheck() << " " << stringSaveList[i].settingCheck() << endl;
		}
	}
}

string deleteDot(string inputString)
{
	for (int i = 0; i < inputString.size(); i++)
	{
		if (inputString[i] == '.')
		{
			inputString[i] = ' ';
		}
	}
	return inputString;
}

void Chatgpt_30()
{
	string result;
	result = " The quick brown fox jumps over the lazy dog. " + result;
	result = " The dog is happy. " + result;
	result = " The brown fox is quick. " + result;
	inputString_Check_Chatgpt_30(deleteDot(result));
}
