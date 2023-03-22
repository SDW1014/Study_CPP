#include "Chatgpt_24.h"

int inputAndEven()
{
	int n = 0;
	int evenSum = 0;
	do 
	{
		cout << "숫자 념겨 : ";
		cin >> n;
		if (n >= 0 && n % 2 == 0)
			evenSum += n;
	}while (n >= 0);
	return evenSum;
}

void Chatgpt_24()
{
	cout <<"\n 짝수의 합 은 : " << inputAndEven() << " 입니다. ";
}
