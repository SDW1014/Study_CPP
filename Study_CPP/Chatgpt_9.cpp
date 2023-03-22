#include "Chatgpt_9.h"


void Chatgpt_9()
{
	int n;
	std::cout << "2부터 N까지의 수를 구하는 프로그램이다 N의 값을 입력해라 :";
	std::cin >> n;

	for (int i = 2; i <= n; i++)
	{
		if (i % 2 != 0 && i % 3 != 0)
		{
			std::cout << i << std::endl;
			continue;
		}
		if(i == 2||i == 3) std::cout << i << std::endl;
	}
}
