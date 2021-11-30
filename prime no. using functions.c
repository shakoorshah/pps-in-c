//prime no. using functions.

#include<stdio.h>
int prime(int);                                   
main()
{
	int n, p ;
	printf("enter value of n ");
	scanf("%d", &n);
	p = prime(n);
	if(p == 1)
	printf("%d is prime", n);
	else
	printf("%d is not prime", n);
}

int prime(int n)
{
	int i;
	for(i=2; i<=n-1; i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}

