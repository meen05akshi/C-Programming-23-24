#include <stdio.h>
int main()
{
	int n,c=65;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\n");
	
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n-i;j++)
		{
			printf("%c ",char(c)); //with a space
		}
		c++;
		printf("\n");
	}
	return 0;
}
