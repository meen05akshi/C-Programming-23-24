#include <stdio.h>
int main()
{
	float a,b,c,d,e,per;
	printf("Enter marks of all 5 subjects:");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	per=(a+b+c+d+e)/5;
	
	printf("Your Grade is: ");
	if (per>=90)
		printf("A");
	else if (per>=80)
		printf("B");
	else if (per>=70)
		printf("C");
	else if (per>=60)
		printf("D");
	else if (per>=40)
		printf("E");
	else
		printf("F");
	
	return 0;
	
}
