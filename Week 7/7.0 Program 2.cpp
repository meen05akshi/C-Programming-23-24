#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr,n,max=0;
	printf("Enter size of array you want: ");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n * sizeof(int));
	
	printf("Enter elements of array: ");
	for(int i=0;i<n;i++)
		scanf("%d",ptr+i);
	
	for(int i=0;i<n;i++)
	{
		if (*(ptr+i)>max)
			max=*(ptr+i);
	}
	
	printf("So element with highest value is: %d",max);
	return 0;
}
