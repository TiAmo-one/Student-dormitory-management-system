#include"Main.h"

//��ѯѧ����Ϣ
void Qurey()
{
	int i = 0,n;
	FILE* fp;
	fp = fopen("StuInform.txt","r");
	if (fp == NULL)
	{
		printf("δ¼��ѧ����Ϣ");
		return;
	};
	STU a[100];
	printf("����	�༶	ѧ��		�����	��λ	���	����\n");
	while (1)
	{
		if (!feof(fp))
		{
			fread(&a[i], sizeof(STU), 1, fp);
			
			i++;
		}
		else break;
	};
	n = i - 1;
	for(i=0;i<n;i++)
		printf("%s	%s	%s	%s	%s	%d	%d\n",
			a[i].name, a[i].class, a[i].num, a[i].dorm, a[i].bednum, a[i].Report_Repair, a[i].Leave);
};