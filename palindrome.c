#include <stdio.h>

int main(int argc, char const *argv[])
{
	int r,s=0;
	int n,a;
	printf("Enter the number which you want to check\n");
	scanf("%d", &n);
	a = n;
	// funtion to reverse the number
	while (n != 0){
		r = n % 10;
		s = s*10 + r;
		n = n/10;
	}
	printf("You entered %d and the reversed number is %d\n", a, s);
	if (a == s){
		printf("The number is palindrome\n");
	}
	else {
		printf("The number is not palindrome\n");
	}
	return 0;
}