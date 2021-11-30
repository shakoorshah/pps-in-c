//factorial using recursion
#include<stdio.h>


int fact(int);

int main()
{
	int n, f;
	printf("enter the no. whose factorial you want to calculate: ");
	scanf("%d", &n);
	f = fact(n);
	printf("factorial is: %d", f);
}
int fact(int n)
{
	int f; 
	if (n==0)
	f=1;
	else
	f=n*fact(n-1);
	return f;
}
