#include <stdio.h>
#include <stdlib.h>
#define MAX 80

void main()
{
	FILE *fptr;
	char str[MAX];
	int bytes;
	fopen_s(&fptr, "output.txt", "r");
	while (!feof(fptr))
	{
		bytes = fread(str, sizeof(char),MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str, MAX);
	}
	fclose(fptr);
	system("PAUSE");
}