#include <stdio.h>
int main()
{
	int array[100], size, c, location = 0;

	printf("Enter the number of elements in array\n");
	scanf_s("%d", &size);

	printf("Enter %d integers\n", size);

	for (c = 0; c < size; c++)
		scanf_s("%d", &array[c]);

	for (c = 1; c < size; c++)
		if (array[c] > array[location])
			location = c;

	printf("Maximum value is %d.\n", array[location]);
	return 0;
}