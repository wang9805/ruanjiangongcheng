#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
	int charcount = 0;
	int wordcount = 1;
	int linecount = 1;
	char filename[80];
	FILE *fp = NULL;

	{
		printf("�������ļ�Ӣ��·��:");
		gets(filename);
		fp = fopen(filename, "r");
		if (fp == NULL)
		{
			printf("������\n");
			printf("�밴enter������....");
			_getch();
			exit(0);
		}
		printf("�ļ���������:\n");
		while (1)
		{
			char ch;
			ch = fgetc(fp);
			if (ch >= 'A'&&ch <= 'z')
			{
				putchar(ch);
				charcount++;/*�ַ�ͳ��*/ 
			}
			else if (ch == ' ')
			{
				putchar(ch);
				wordcount++;/*����ͳ��*/ 
			}
			else if (ch == '\n')
			{
				putchar(ch);
				wordcount++;
				linecount++;/*����ͳ��*/ 
			}
			else if (ch = EOF)
			{
				break;
			}
		}
		printf("\n");
		printf("�ַ���: %d\n", charcount);
		printf("������: %d\n", wordcount);
		printf("����: %d\n", linecount);
		fclose(fp);
		_getch();
		exit(0);
	}
}
