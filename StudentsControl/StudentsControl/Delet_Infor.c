#include"Main.h"

void Delet_Infor()
{
	FILE* fp;
	fp = fopen("StuInform.txt", "r");
	STU a[10];
	int i = 0;
	int j = 0;
	int x = 0;
	int m = 0;
	char DeletNum[N];
	while (1)
	{
		if (!feof(fp))
		{
			fread(&a[i], sizeof(STU), 1, fp);

			i++;
		}
		else break;
	};
	int n = i - 1;
	fclose(fp);
	printf("---------ɾ��ѧ����Ϣ-----------\n");
	printf("������ɾ��ѧ��ѧ��:");
	scanf("%s", DeletNum);
	for (j; j < n; j++)
	{
		if (!strcmp(a[j].num, DeletNum))
		{
			fp = fopen("StuInform.txt", "w+");
			for (x; x < n; x++)
			{
				if (x != j)
					fwrite(&a[x], sizeof(STU), 1, fp);
			}
			fclose(fp);
			printf("-----------ɾ���ɹ�---------\n");
		}
		if (strcmp(a[j].num, DeletNum))
			m++;
	}
		
	if (j == m - 1)
		printf("��ѧ�������ڣ��޷�ɾ��\n");
		

			

	

};