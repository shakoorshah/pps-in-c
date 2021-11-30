//area of rectangle using functions

#include<stdio.h>
int rectangle_area(int, int);
main()
{
	int l, b, area;
	printf("enter values of l and b");
	scanf("%d %d", &l, &b);
	area= rectangle_area(l,b);
	printf("area of rectangle is %d", area);
	
}

int rectangle_area(int x, int y)
{
	int ans;
	ans = x*y;
	return ans;
}

