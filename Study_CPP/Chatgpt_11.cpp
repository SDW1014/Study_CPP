#include "Chatgpt_11.h"

void Chatgpt_11()
{
	cout << "���� �޾Ƽ� ¦���� ¦������ Ȧ���� Ȧ������ ���ϴ� ���α׷��̴�." << endl;
	cout << "���� �Է����ּ��� : ";
	int n;
	cin >> n;

	int left = 0;
	int right = 0;

	for (int i = 0; i <= n; i++)
		(i % 2 == 0) ? right += i : left += i;

	cout << "¦�� : " << right << endl;
	cout << "Ȧ�� : " << left << endl;
}
