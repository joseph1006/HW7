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
		printf("\n共有%d個字元\n", count);
	}
	else
	{
		printf("檔案開啟失敗!!\n");
	}
	system("PAUSE");
}