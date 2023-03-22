#include "Chatgpt_5.h"

void Chatgpt_5()
{
	int n;
	int sum = 0;
	std::cout << "입력 해주세요 : ";
	std::cin >> n;

	for (int i = 0; i <= n; i++)
	{
		sum += i;
	}
	std::cout << "합한수 : " << sum << std::endl;
}
