#include "Chatgpt_13.h"
#include <vector>
void Chatgpt_13()
{
	std::vector<int> v_1(9, 0);
	v_1 = { - 2, 1, -3, 4, -1, 2, 1, -5, 4 };

	int l=0, k=0, max = 0;
	for (int i = 0; i < v_1.size(); i++)
	{
		int sum = 0;
		for (int j = i; j < v_1.size(); j++) 
			sum += v_1[j];
		for (int j = v_1.size() - 1; j > i; j--)
		{
			if (max < sum)
			{
				l = i;
				k = j;
				max = sum;
			}
			sum += v_1[j];
		}
	}

	for (int i = l; i < k; i++)
	{
		std::cout << v_1[i] << " ";
	}
}
