#include "Chatgpt_8.h"
#include <cmath>

void Chatgpt_8()
{
	int n;
	std::cout << "������ �Ǻ����ٰ� ���� : ";
	std::cin >> n;

	int result = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
			result += i;
		
	}
	std::cout << "�� ���� �������� ";
	(result == n) ? std::cout<<"�½��ϴ�." : std::cout << "�ƴմϴ�.";
}

void Chatgpt_8_1()
{
	int n;
	std::cout << "������ �Ǻ����ٰ� ���� : ";
	std::cin >> n;

	int result = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
			result += i;

	}
	std::cout << "�� ���� �������� " <<((result == n) ? "�½��ϴ�." : "�ƴմϴ�.");
}
