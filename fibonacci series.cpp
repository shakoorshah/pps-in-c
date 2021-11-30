//fibonacci series

#include<stdio.h>
int main()
{
	int i, n, a=1, b=1, c;
	printf("enter n value");
	scanf("%d", &n);
	for(i=0; i<=n;i++)
	{
		printf("%d", a);
		c=a+b;
		a=b;
		b=c;
	}
	
}
