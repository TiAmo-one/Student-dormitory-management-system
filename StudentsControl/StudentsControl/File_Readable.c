#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void File_Readable()
{
	FILE* fp;
	if ((fp = fopen("Register.txt", "rb+")) == NULL) //���ļ�����ʱ��fopen() ������һ����ָ�룬Ҳ���� NULL
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
