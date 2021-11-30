//fibbonacci series using recursion

#include <stdio.h>

int fib(int);
int main()
{
	int i, n, f;
	printf("enter the value of n: ");
	scanf("%d", &n);
	for(i=0; i<=n; i++)
	{
		f=fib(i);
		printf("%d", f);
		
	}

}
int fib(int n)
{
	if(n==0)
	return 0;
	else if (n==1 || n==2)
	return 1;
	else
	return(fib(n-1)+fib(n-2));
}
