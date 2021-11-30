//scan an integer array from the user of size n and display the same

#include<stdio.h> 
int main()
{
    int a[1000],i,n;  
 
     printf("Enter size of array: ");
    scanf("%d",&n);
 
     printf("Enter %d elements in the array : ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
 
    printf("\nElements in array are: ");
    for(i=0;i<n;i++)
 
    {
        printf("%d  ", a[i]);
    }
 
}
