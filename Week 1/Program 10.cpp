
#include <stdio.h>
#include <math.h>
int main()
{
	 float a;
	 float cub;
	 printf("Enter a number: \n");
	 scanf("%f",&a);
	 cub=pow(a,3);
	 printf("Cube of %f is %f",a,cub);
	 return 0;
}
