#include <stdio.h>
int main()
{
	float basic,da,hra,gross;
	printf("Enter basic salary: Rs.");
	scanf("%f",&basic);
	da= 0.48 * basic;
	hra= 0.16 * basic;
	gross= basic + da + hra;
	printf("\n Gross salary of user is: Rs.%f",gross);
	return 0;
	
}
