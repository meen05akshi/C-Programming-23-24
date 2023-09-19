#include <stdio.h>
int main()
{
	float km,m,cm,mm;
	printf("Enter a value in kilometers:");
	scanf("%f",&km);
	m=km*1000;
	cm=m*100;
	mm=cm*10;
	printf("%f km in meters is: %f m \n",km,m);
	printf("%f km in centimeters is: %f cm \n",km,cm);
	printf("%f km in millimeters is: %f mm \n",km,mm);
	return 0;
}
