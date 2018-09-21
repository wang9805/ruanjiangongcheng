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
		printf("请输入文件英文路径:");
		gets(filename);
		fp = fopen(filename, "r");
		if (fp == NULL)
		{
			printf("打开有误！\n");
			printf("请按enter键继续....");
			_getch();
			exit(0);
		}
		printf("文件内容如下:\n");
		while (1)
		{
			char ch;
			ch = fgetc(fp);
			if (ch >= 'A'&&ch <= 'z')
			{
				putchar(ch);
				charcount++;/*字符统计*/ 
			}
			else if (ch == ' ')
			{
				putchar(ch);
				wordcount++;/*单词统计*/ 
			}
			else if (ch == '\n')
			{
				putchar(ch);
				wordcount++;
				linecount++;/*行数统计*/ 
			}
			else if (ch = EOF)
			{
				break;
			}
		}
		printf("\n");
		printf("字符数: %d\n", charcount);
		printf("单词数: %d\n", wordcount);
		printf("行数: %d\n", linecount);
		fclose(fp);
		_getch();
		exit(0);
	}
}
