#include <stdio.h>
int main()
{
	int n,s,count=0,temp;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int num=n;
	 while(num>1)
	 {
	 	num=num/2;
	 	count++;
	 }
	count++;
	num=n;
	int a[count];
	
	for(int i=0;i<count;i++)
	{
		s=num%2;
		a[i]=s;
		num=num/2;
	}
	
	for(int i=0;i<count/2;i++)
	{
		temp=a[count-i-1];
		a[count-i-1]=a[i];
		a[i]=temp;
	}
	
	printf("\nBinary equivalent: ");
	for(int i=0;i<count;i++)
		printf("%d",a[i]);

	return 0;
}


