#include "Chatgpt_7.h"

void Chatgpt_7()
{
	int n;
	std::cout << "���� �Է��ض� :";
	std::cin >> n;
	std::cout << "�� ����";
	if (n != 2)
	{
		if (n % 2 != 0 && n % 3 != 0)
			std::cout << "������ �ѹ� �Դϴ�.";
		else
			std::cout << "������ �ѹ� �ƴմϴ�.";
	}
	else
		std::cout << "������ �ѹ� �Դϴ�.";
	//std::cout << "�Է� ���� �� " << " �� " << (n == 2 ? "�����ӳѹ� �Դϴ�." : (n % n != 0 ? "������ �ѹ��� �ƴմϴ�." : "������ �ѹ� �Դϴ�."));
}
