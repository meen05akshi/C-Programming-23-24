#include <stdio.h>
int main()
{
	int n,count,num;
	char flag='n';
	printf("Enter value of n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=0;j<n;j++)
			if (a[i]==a[j])
				count++;
		if(count>n/2)
		{
			num=a[i];
			flag='y';
			break;
		}
			
	}
	
	if(flag=='y')
	{
		printf("\nMajority element: %d",num);
		printf("\nThe frequency of %d is %d which is greater than the half of the size of the array size.\n",num,count);
	}
	
	else
	{
		printf("No majority element\n");
		printf("There is no element whose frequency is greater than the half of the size of the array size.");
	}
	return 0;
}
