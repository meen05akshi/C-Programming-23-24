/* 0-100 charge is fixed 30
   101-250 			Rs 2 per unit
   251 to 450		Rs 3 per unit
   >450				Rs 5 per unit*/
#include <stdio.h>
int main()
{
	int units;
	int charge;
	printf("Enter number of units:");
	scanf("%d",&units);
	
	if (0<units && units<=100)	/*Can't write as 0<units<=100 */
		charge= 30;
	else if (100<units && units<=250)
		charge = 30 + ((units-100)*2);
	else if (250<units && units<=450)
		charge = 30 + (150*2) + ((units-250)*3);
	else
		charge = 30 + (150*2) + (200*3) + ((units-450)*5);
	
	printf("Charge is %d",charge);
	
	return 0;
	
}
