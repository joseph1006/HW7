#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fptr1,*fptr2;
	char ch;
	fopen_s(&fptr1, "welcome.txt", "r");
	fopen_s(&fptr2, "output.txt", "w");

	if ((fptr1 != NULL) && (fptr2 != NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
		{
			putc(ch, fptr2);
		}
		fclose(fptr1);
		fclose(fptr2);
		printf("�ɮ׫�������!!\n");
	}
	else
	{
		printf("�ɮ׫�������!!\n");
	}
	system("PAUSE");
}