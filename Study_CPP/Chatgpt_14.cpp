#include "Chatgpt_14.h"

using namespace std;

bool isPrime(int prime)
{
	if (prime > 1&&prime <= 3)
		return true;

	if (prime % 2 != 0 && prime % 3 != 0)
	{
		return true;
	}
	return false;
}
void Chatgpt_14()
{
	int n;
	cout << "������ �ѹ��� �����ϴ� �Լ��� ����� ���ڽ��ϴ�." << endl;
	cout << "������ �Է� �Ͻÿ� : ";
	cin >> n;

	if (isPrime(n))
	{
		cout << "������ �ѹ�";
	}
}
