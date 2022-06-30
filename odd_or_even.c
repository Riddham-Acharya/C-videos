#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,r;
	printf("Enter the number which you want to check whether it is odd or even\n");
	scanf("%d", &n);
	r = n % 2;
	if (n == 0){
		printf("0 is neither odd nor even.\n");
	}
	else if (r == 0){
		printf("The number is even.\n");
	}
	else{
		printf("the number is odd.\n");
	}
	return 0;
}