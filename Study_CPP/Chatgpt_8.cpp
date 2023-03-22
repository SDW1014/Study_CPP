#include "Chatgpt_8.h"
#include <cmath>

void Chatgpt_8()
{
	int n;
	std::cout << "완전수 판별해줄게 내놔 : ";
	std::cin >> n;

	int result = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
			result += i;
		
	}
	std::cout << "이 수는 완전수가 ";
	(result == n) ? std::cout<<"맞습니다." : std::cout << "아닙니다.";
}

void Chatgpt_8_1()
{
	int n;
	std::cout << "완전수 판별해줄게 내놔 : ";
	std::cin >> n;

	int result = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
			result += i;

	}
	std::cout << "이 수는 완전수가 " <<((result == n) ? "맞습니다." : "아닙니다.");
}
