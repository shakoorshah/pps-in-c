//search elements in an array

#include<stdio.h>
int main()
{
	int a[1000], i, n, toSearch, found;
	printf("enter array size: ");
	scanf("%d", &n);
	
	printf("enter %d elements in the array: ", n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter element to search");
	scanf("%d", &toSearch);
	found=0;
	
	for(i=0; i<n; i++)
	{
		if(a[i]==toSearch)
		{
			
	     	found=1;
		    break;
		}
		
		
	
	}
	if(found==1)
	{
		printf("%d element is at %d position", toSearch, i+1);
	}
	else
	{
		printf("%d element is not contained in the array", toSearch);
	}
	
}
