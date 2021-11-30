//sum of digits in a given number

#include<stdio.h>
int main()
{
	int n, r, sum=0, temp;
	printf("enter the value of n: ");
	scanf("%d", &n);
	//temp=n;
	while(n>0)
	{
		r=n%10;
		sum= sum+r;
		n=n/10;
	}
	//n=temp;
	printf("the sum of given no. is : %d", sum);
}
