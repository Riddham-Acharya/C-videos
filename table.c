#include <stdio.h>

int main()
{
	int num;
	printf("Enter the number whose multiplication table you want to print.\n");
	scanf("%d", &num);
	for (int i = 1; i <= 10; ++i)
	{
		printf("%d X %d = %d\n",num, i, (num*i));
	}
	return 0;
}