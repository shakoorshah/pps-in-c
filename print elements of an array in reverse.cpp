//print elements of an array in reverse order

#include<stdio.h>
int main()
{
	int i, n, a[1000];
	printf("enter array size: ");
	scanf("%d", &n);
	
	printf("enter %d elements in the array: ", n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("original array is: ");
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("array in reverse is: ");
	for(i=n-1; i>=0; i--)
	{
		printf("%d ", a[i]);
	}
	
}
