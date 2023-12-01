#include <stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("New.txt","a");
	fp2=fopen("INPUT.txt","r");
	
	char s=fgetc(fp2);
	while(s!=EOF)
	{
		fputc(s,fp1);
		s=fgetc(fp2);
	}
	
	fclose(fp1);
	fclose(fp2);
	return 0;
}
