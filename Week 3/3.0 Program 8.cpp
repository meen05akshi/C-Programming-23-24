#include <stdio.h>
int main()
{
	int n,count=0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	int num=n;
	while (n>0)
	{
		n=n/10;
		count++;
	}
	printf("\n Length of %d is %d ",num,count);
	return 0;
}
