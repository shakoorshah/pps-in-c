//print the following pattern

***
****
*****
******
*******


#include<stdio.h>
int main()
{
	int i, j;
	for(i=3; i<=7; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
