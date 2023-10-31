#include <stdio.h>
int main()
{
	int n,s1=0,s2=0;
	printf("Enter an even size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n/2;i++)
		s1+=a[i];
	
	for(int i=n/2;i<n;i++)
		s2+=a[i];
	
	if (s1-s2>0)
		printf("\nArray is unbalanced so %d should be added to the right half of elements to balance it.",s1-s2);
	else if (s1-s2==0)
		printf("\nArray is balanced");
	else
		printf("\nArray is unbalanced so %d is minimum number that can be added to the left half of elements to balance it.",s2-s1);
	
	return 0;
}
