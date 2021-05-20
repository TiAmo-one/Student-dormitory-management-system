#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void File_Readable()
{
	FILE* fp;
	if ((fp = fopen("Register.txt", "rb+")) == NULL) //打开文件出错时，fopen() 将返回一个空指针，也就是 NULL
	{
		printf("ERROR:FILE CAN'T OPEN");
		exit(0);
	};
	if ((fp = fopen("StuInform.txt", "rb+")) == NULL)
	{
		printf("ERROR:FILE CAN'T OPEN");
		exit(0);
	};
	fclose(fp);
}
