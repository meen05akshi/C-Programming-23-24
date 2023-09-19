#include <stdio.h>
int main()
{
	int a=0,b=1,s,n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	for (int i=3;i<=n;i++)
	{
		s=a+b;
		a=b;
		b=s;
	}
	printf("%dth Fibonacci number is: %d",n,s);
	return 0;
}
