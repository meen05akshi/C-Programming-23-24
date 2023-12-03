#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p1,*p2,n1,n2,k=0;
	printf("Enter size of array 1: ");
	scanf("%d",&n1);
	printf("Enter size of array 2: ");
	scanf("%d",&n2);
	p1=(int *)calloc(n1,sizeof(int));
	p2=(int *)calloc(n2,sizeof(int));
	
	printf("Enter elements of array 1:\n");
	for(int i=0;i<n1;i++)
		scanf("%d",p1+i);
	
	printf("Enter elements of array 2:\n");
	for(int i=0;i<n2;i++)
		scanf("%d",p2+i);
	
	p1=(int *)realloc(p1,n1+n2);
	
	for(int i=0;i<n1+n2;i++)
	{
		if (i>=n1)
		{
			*(p1+i)=*(p2+k);
			k++;
		}
	}
	
	printf("Elements of array 1: ");
	for(int i=0;i<n1+n2;i++)
		printf("%d ",p1[i]);
	return 0;
}
