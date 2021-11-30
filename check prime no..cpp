//simple prime number

#include<stdio.h>
int main()
{
	int n, i, count=0;
	printf("enter the velue of n: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			   count++;
		}
	  
	}
	if(count==2)
	printf("the number is prime");
	else
	printf("the number is not prime");
}
