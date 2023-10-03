#include <stdio.h>
int main()
{
	int n,c=65;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\n");
	
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<=i;j++)
		{
			printf("%c",char(c));
		}
		c++;
		printf("\n");
	}
	return 0;
}
