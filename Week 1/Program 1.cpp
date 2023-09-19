#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("Sum of %d and %d is %d \n",a,b,(a+b));
	printf("Difference of %d and %d is %d \n",a,b,(a-b));
	printf("Multiplication of %d and %d is %d \n",a,b,(a*b));
	printf("Division of %d and %d is %d",a,b,(a/b));
	return 0;
}
