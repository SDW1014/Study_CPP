#include "Chatgpt_5.h"

void Chatgpt_5()
{
	int n;
	int sum = 0;
	std::cout << "�Է� ���ּ��� : ";
	std::cin >> n;

	for (int i = 0; i <= n; i++)
	{
		sum += i;
	}
	std::cout << "���Ѽ� : " << sum << std::endl;
}
