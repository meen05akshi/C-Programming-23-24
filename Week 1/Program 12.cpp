#include <stdio.h>
#include <math.h>
int main()
{
	int days;
	float years;
	printf("Enter number of days:");
	scanf("%d",&days);
	years=float(days)/365;
	printf("\n %d days in number of years is: %f",days,years);
	return 0;
}
