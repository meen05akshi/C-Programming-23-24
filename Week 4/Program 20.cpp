#include <stdio.h>
int main()
{
	int n,k=1;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\n");
	
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n-i;j++)
		{	printf("%d ",k); //with 1 space
			if (k<10)
				printf(" "); //1 space
			k++;
		}
		printf("\n");
	}
	return 0;
}
