#include <stdio.h>
int rec(int, int ,int , int );
int main()
{
	int a,b,c,n;
	printf("Enter first three terms of the series: ");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("Enter value of n: ");
	scanf("%d",&n);
	int sum=rec(n,a,b,c);
	
	printf("%d",sum);
	return 0;
}

int rec(int num, int x,int y, int z)
{
	int sum=x+y+z;
	if (num==1)
		return x;
	else if(num==2)
		return y;
	else if(num==3)
		return z;
	else
		return rec(num-1,x,y,z) + rec(num-2,x,y,z) + rec(num-3,x,y,z);
}
