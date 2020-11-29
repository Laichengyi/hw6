#include <stdio.h>
#include <stdlib.h>

int binarysearch(int[], int, int);

int main(int argc, const char * argv[])
{
	int bubble[100], a, tmp, search, ans;
	printf("請輸入有多少資料:");
	scanf_s("%d", &a);

	printf("請輸入資料:");
	for (int i = 0; i < a; i++)
		scanf_s("%d", &bubble[i]);

	for (int i = 0; i < a - 1; i++)
	{
		for (int j = 0; j < a - 1; j++)
		{
			if (bubble[j] > bubble[j + 1])
			{
				tmp = bubble[j];
				bubble[j] = bubble[j + 1];
				bubble[j + 1] = tmp;
			}
		}
	}
	printf("排序後資料為");
	for (int i = 0; i < a; i++)
		printf("%d ", bubble[i]);

	printf("\n請輸入欲搜尋的資料:");
	scanf_s("%d", &search);

	ans = binarysearch(bubble, search, a);

	if (ans < 0)
	{
		printf("找不到 %d\n", search);
	}
	else
	{
		printf("在第 %d 筆資料找到 %d\n", ans + 1, search);
	}

	return 0;
}

int binarysearch(int bubble[], int search, int n)
{
	int low = 0, high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (bubble[mid] == search)
		{
			return mid;
		}
		else if (bubble[mid] > search)
		{
			high = mid - 1;
		}
		else if (bubble[mid] < search)
		{
			low = mid + 1;
		}
	}

	return -1;
}