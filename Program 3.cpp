#include <stdio.h>
#include <math.h>
int main()
{
	float area,rad;
	printf("Enter radius of circle:");
	scanf("%f",&rad);
	area=3.14*pow(rad,2);
	printf("Area of circle is: %f",area);
	return 0;	
}
