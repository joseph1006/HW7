#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fptr;
	char ch;
	int count=0;

	fopen_s(&fptr,"welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�@��%d�Ӧr��\n", count);
	}
	else
	{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	system("PAUSE");
}