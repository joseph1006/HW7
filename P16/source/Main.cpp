#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

#define ENTER 13
#define MAX 80

using namespace std;

void main()
{
	char str[MAX], ch;
	int i = 0;
	FILE *fptr;
	fopen_s(&fptr, "output.txt", "a");
	printf("請輸入字串，按ENTER鍵結束輸入:\n");
	cin.getline(str, MAX);
	fwrite(str, sizeof(char), strlen(str), fptr);
	fwrite("\n", sizeof(char), 1, fptr);
	cout << strlen(str);
	fclose(fptr);
	printf("\n檔案附加完成!!\n");
	system("PAUSE");
}