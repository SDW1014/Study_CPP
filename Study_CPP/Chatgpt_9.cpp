#include "Chatgpt_9.h"


void Chatgpt_9()
{
	int n;
	std::cout << "2���� N������ ���� ���ϴ� ���α׷��̴� N�� ���� �Է��ض� :";
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
