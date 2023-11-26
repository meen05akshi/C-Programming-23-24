//NOT

#include <stdio.h>
int main()
{
	int n,m;
	printf("Enter length of string 1: ");
	scanf("%d",&n);
	n++;
	char s1[n];
	scanf("%s",s1);
	
	printf("Enter length of string 2: ");
	scanf("%d",&m);
	m++;
	char s2[m];
	scanf("%s",s2);
	
	int c=n+m;
	char s3[c];
	int k=0;
	for(int i=0;i<n+m;i++)
	{
		if (i<n)
		{
			printf("Hello");
			s3[i]=s1[i];
		}
			
		else
		{
			printf("Guys");
			s3[i]=s2[k];
			k++;
		}
	}
	
	printf("%s",s3);
	return 0;
}
