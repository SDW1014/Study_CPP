#include "Chatgpt_16.h"
#include <vector>

void Chatgpt_16()
{
	string s;
	cout << "���ڿ��� �Է��� �ּ���." << endl;
	cout << "�Է� : ";
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

	cout << "���� ���� ������ �� �Դϴ�. :" << (char)indexSave << endl;
}
