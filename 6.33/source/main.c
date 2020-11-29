#include <stdio.h>
#include <stdlib.h>

int binarysearch(int[], int, int);

int main(int argc, const char * argv[])
{
	int bubble[100], a, tmp, search, ans;
	printf("�п�J���h�ָ��:");
	scanf_s("%d", &a);

	printf("�п�J���:");
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
	printf("�Ƨǫ��Ƭ�");
	for (int i = 0; i < a; i++)
		printf("%d ", bubble[i]);

	printf("\n�п�J���j�M�����:");
	scanf_s("%d", &search);

	ans = binarysearch(bubble, search, a);

	if (ans < 0)
	{
		printf("�䤣�� %d\n", search);
	}
	else
	{
		printf("�b�� %d ����Ƨ�� %d\n", ans + 1, search);
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