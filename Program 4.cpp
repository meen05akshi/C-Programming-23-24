#include <stdio.h>
int main()
{
	float a,b,c,d,e,per;
	printf("Enter marks of 5 subjects:");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	per=(a+b+c+d+e)/5;
	printf("Percentage of student is: %f",per);
	return 0;
}
