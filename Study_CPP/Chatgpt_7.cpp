#include "Chatgpt_7.h"

void Chatgpt_7()
{
	int n;
	std::cout << "수를 입력해라 :";
	std::cin >> n;
	std::cout << "이 수는";
	if (n != 2)
	{
		if (n % 2 != 0 && n % 3 != 0)
			std::cout << "프라임 넘버 입니다.";
		else
			std::cout << "프라임 넘버 아닙니다.";
	}
	else
		std::cout << "프라임 넘버 입니다.";
	//std::cout << "입력 받은 수 " << " 는 " << (n == 2 ? "프라임넘버 입니다." : (n % n != 0 ? "프라임 넘버가 아닙니다." : "프라임 넘버 입니다."));
}
