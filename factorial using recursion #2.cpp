//factorial using recursion #2

#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("enter value of n: ");
	scanf("%d", &n);
	f=fact(n);
	printf("factorial is : %d", f);
	


}
int fact(int n)
{
	if (n==0)
	return 1;
	else
	 return n*fact(n-1);
}

