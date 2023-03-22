#include "Chatgpt_11.h"

void Chatgpt_11()
{
	cout << "¼ö¸¦ ¹Þ¾Æ¼­ Â¦¼ö´Â Â¦¼ö³¢¸® È¦¼ö´Â È¦¼ö³¢¸® ´õÇÏ´Â ÇÁ·Î±×·¥ÀÌ´Ù." << endl;
	cout << "¼ö¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä : ";
	int n;
	cin >> n;

	int left = 0;
	int right = 0;

	for (int i = 0; i <= n; i++)
		(i % 2 == 0) ? right += i : left += i;

	cout << "Â¦¼ö : " << right << endl;
	cout << "È¦¼ö : " << left << endl;
}
