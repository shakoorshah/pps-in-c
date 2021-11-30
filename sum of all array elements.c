//sum of all array elements

#include<stdio.h>
int main()
{
	int a[1000], i, sum=0, n;
	printf("enter size of array: ");
	scanf("%d", &n);
	
	printf("enter %d elements in the array: ", n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		sum=sum+a[i];
	}
	printf("the sum is: %d", sum);
}
