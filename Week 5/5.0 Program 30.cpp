#include <stdio.h>
int main()
{
	int n,num1=0,num2=0,sum=0,m;
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
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);
	
	for(int i=0;i<n;i++)
	{
		num1=num1*10+a[i];
	}
	
	for(int i=0;i<m;i++)
	{
		num2=num2*10+b[i];
	}
	
	sum=num1+num2;
	printf("%d ",sum);
	
	return 0;
}
