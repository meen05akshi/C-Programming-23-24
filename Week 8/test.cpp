#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr;
	char fname[20];
	char str;
	fptr = fopen ("DATA.txt", "r");  
	if (fptr == NULL)
	{
		printf(" File does not exist or cannot be opened.\n");
		exit(0);
	}
	printf("\n The content of the file is  :\n");
	str = fgetc(fptr);
	while (str != EOF)
		{
			printf ("%c", str);
			str = fgetc(fptr);
		}
	fclose(fptr);
    printf("\n\n");
}
