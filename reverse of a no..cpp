//reverse of a number .
#include<stdio.h>
int main()
{
	int n, r, sum=0;
	printf("enter the number");
	scanf("%d", &n);
	while(n>0)
	{
		r=n%10;
		sum= (sum*10)+r;
		n=n/10;
	}
	printf("reverse of the given number is: %d", sum);
}
