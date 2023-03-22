#include "Chatgpt_10.h"

void Chatgpt_10()
{
	int n;
	cout << "ÀÔ·ÂÇØ : ";
	cin >> n;
	for (int for_i = 0; for_i < n; for_i++)
		cout << for_i << " ";
	if (n <= 2)	return;

	int run = 2;
	int i = 0;
	int j = 1;
	int totalCount;
	while (run != n)
	{
		totalCount = i+j;
		i = j;
		j = totalCount;
		run++;
		cout << totalCount <<" ";
	}
}
