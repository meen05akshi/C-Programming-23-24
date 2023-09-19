#include <stdio.h>
int main()
{
	float a,b,res;
	int res1;
	printf("Enter 2 numbers:");
	scanf("%f %f",&a,&b);
	res=a*b;
	res1=a*b;
	printf("Result in float is: %f \n",res);
	printf("Result in int is: %d", res1);
	return 0;
}
