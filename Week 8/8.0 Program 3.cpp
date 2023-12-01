#include <stdio.h>
int main()
{
	FILE *fp1,*fp2,*ptr;
	fp1=fopen("Copy.txt","r");
	fp2=fopen("CopyInto.txt","w");
	
	char str=fgetc(fp1);
	while(str!=EOF)
	{
		fputc(str,fp2);
		str=fgetc(fp1);
	}
	
	fclose(fp2);
	
	ptr=fopen("CopyInto.txt","r");
	char s=fgetc(ptr);
	printf("Copied contents in file 2 is: \n");
	
	while(s != EOF)
	{
		printf("%c", s);
		s = fgetc(ptr);
	}
	
	
	fclose(ptr);
	fclose(fp1);
	return 0;
}
