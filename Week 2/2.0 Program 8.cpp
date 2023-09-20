#include <stdio.h>
int main()
{
	int a,b,c ;
	printf("Enter the three sides of a triangle:");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && a==c)
		printf("Triangle is equilateral");
	else if (a==b || b==c || a==c)
		printf("Triangle is Isosceles");
	else
		printf("Triangle is Scalene");
	
	return 0;
}
