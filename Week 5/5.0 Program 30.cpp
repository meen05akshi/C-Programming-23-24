#include <stdio.h>
int main()
{
	int n,min;
	printf("Enter size of array 1: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array 1: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter size of array 2: ");
	scanf("%d",&m);
	int b[m];
	printf("Enter elements of array 2: \n");
	for(int i=0;i<n;i++)m
		scanf("%d",&b[i]);
	
	if (n>m)
		min=m;
	else
		min=n;
	
	
	return 0;
}
