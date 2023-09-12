#include <stdio.h>
#include <math.h>
int main()
{
	float p,r,t,sim,com;
	int n;
	printf("Enter principle amount:");
	scanf("%f",&p);
	printf("\n Enter rate of interest:");
	scanf("%f",&r);
	printf("\n Enter time:");
	scanf("%f",&t);
	printf("Enter number of times compounded in one time period: ");
	scanf("%d",&n);
	sim= p*r*t;
	printf("\n Simple interest is %f",sim);
	com=p * (1+ pow((r/float(n)),(n*t)));
	printf("\n Compound interest is %f",com);
	return 0;
}
