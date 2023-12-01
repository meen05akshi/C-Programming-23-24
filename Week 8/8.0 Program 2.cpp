#include <stdio.h>
int main()
{
	FILE *fp,*fp1,*fp2,*ptr,*pfp1,*pfp2;
	ptr=fopen("DATA.txt","r");
	
	fp1=fopen("ODD.txt","w");
	fp2=fopen("EVEN.txt","w");
	
	char c1;
	char str=fgetc(ptr);
	int x=str-'0';
	while (str != EOF)
	{
		if(str!=' ')
		{
			if(x%2==0)
				fputc(str,fp2);
			else
				fputc(str,fp1);
			fputc(' ',fp1);
			fputc(' ',fp2);
		}
		str = fgetc(ptr);
		x=str-'0';
	}
	printf("Values have been segregated into even and odd files respectively. ");

	fclose(fp1);
	fclose(fp2);
	fclose(ptr);
	return 0;
}
