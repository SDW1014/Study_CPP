#include "Chatgpt_6.h"

void Chatgpt_6()
{
	int n;
	int factorial = 1;
	std::cout << "정수를 입력하세요 팩토리얼을 시작합니다. : ";
	std::cin >> n;

	for (int i = 2; i <= n; i++)
	{
		factorial *= i;
	}
	std::cout << "이것이 팩토리얼이다 : " << factorial << std::endl;
}
