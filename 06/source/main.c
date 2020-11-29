#include <stdio.h>
#include <stdlib.h>

int cueByValue(int n);

int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	number = cueByValue(number);

	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}

int cueByValue(int n)
{
	return n * n*n;
}