#include "Chatgpt_4.h"

void Chatgpt_4()
{
	int number;
	std::cout << "¦������ Ȧ������ ��Ÿ���� ���α׷��Դϴ�." << std::endl;
	std::cout << "���ڸ� �Է��� �ּ��� : ";
	std::cin >> number;
	switch (number%2) 
	{
	case 0: 
		std::cout << "¦��";
		break;
	case 1: 
		std::cout << "Ȧ��";
		break;
	}
}

void Chatgpt_4_1()
{
	int n;
	std::cout << "��ȣ�� �Է��� : ";
	std::cin >> n;
	std::cout << (n % 2 == 0 ? "¦��" : "Ȧ��");
}
