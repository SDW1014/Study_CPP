#include "Chatgpt_24.h"

int inputAndEven()
{
	int n = 0;
	int evenSum = 0;
	do 
	{
		cout << "���� ��� : ";
		cin >> n;
		if (n >= 0 && n % 2 == 0)
			evenSum += n;
	}while (n >= 0);
	return evenSum;
}

void Chatgpt_24()
{
	cout <<"\n ¦���� �� �� : " << inputAndEven() << " �Դϴ�. ";
}
