#include "Chatgpt_6.h"

void Chatgpt_6()
{
	int n;
	int factorial = 1;
	std::cout << "������ �Է��ϼ��� ���丮���� �����մϴ�. : ";
	std::cin >> n;

	for (int i = 2; i <= n; i++)
	{
		factorial *= i;
	}
	std::cout << "�̰��� ���丮���̴� : " << factorial << std::endl;
}
