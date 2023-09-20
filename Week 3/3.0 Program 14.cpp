#include <stdio.h>
#include <math.h>
int main()
{
	int n,b,i,count=0;
	printf("Enter binary number b: ");
	scanf("%d",&b);
	int num=b;
	
	while (num>0)
	{
		i=num%10;
		n=n+ i*pow(2,count);
		count++;
		num=num/10;
	}
	printf("\nDecimal equivalent of %d is %d",b,n);
	return 0;
}
