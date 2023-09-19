#include <stdio.h>
#include <math.h>
int main()
{
	int n,num,count=0,first,sum;
	printf("Enter value of n: ");
	scanf("%d",&n);
	int last=n%10;
	num=n;
	
	while (num>0)
	{
		num=num/10;
		count++;
	}
	
	first= n/ pow(10,count-1);
	sum=first + last;
	printf("\nSum of first and last digits of %d is %d ",n,sum);
	
	return 0;
}
