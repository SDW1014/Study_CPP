#include "Chatgpt_16.h"
#include <vector>

void Chatgpt_16()
{
	string s;
	cout << "문자열을 입력해 주세요." << endl;
	cout << "입력 : ";
	cin >> s;

	vector <int> v(128,0);

	for (int i = 0; i < s.size(); i++)
		v[s[i]]++;

	int maximamNumber = 0;
	int indexSave = 0;
	for (int i = 0; i < 128; i++)
	{
		if (v[i] > maximamNumber)
		{
			maximamNumber = v[i];
			indexSave = i;
		}
	}

	cout << "가장 많이 나오는 수 입니다. :" << (char)indexSave << endl;
}
