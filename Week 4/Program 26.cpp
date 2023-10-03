#include <stdio.h>
int main()
{
	int n,c=65,c1;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\n");
	
	for (int i=0;i<n;i++)
	{
		c1=c;
		for (int j=0;j<=i;j++)
		{
			printf("%c ",char(c1+n-i-1));
			c1++;
		}
		printf("\n");
	}
	return 0;
}
