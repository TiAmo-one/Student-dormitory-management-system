#include"Main.h"
#define N 9

void Inf_Rev()
{
	int i = 0,ii=0,y=0;
	char stand_in[N];
	int choice_num;
	char name[N];
	char num[N]; //ѧ��
	char class[N]; //�༶
	char dorm[N]; //�����
	char bednum[N]; //��λ
	int Report_Repair; //����
	int Leave;//���
	FILE* fp;
	fp = fopen("StuInform.txt", "rb+");
	STU a[10];
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

	printf("�������޸�ѧ����ѧ�ţ�");
	scanf("%s", stand_in);
	for (ii ; ii < n; ii++)
	{
		
		if (!strcmp(a[ii].num, stand_in))
		{
			printf("����	�༶	ѧ��		�����	��λ	���	����\n");
			printf("%s	%s	%s	%s	%s	%d	%d\n", a[ii].name, a[ii].class, a[ii].num, a[ii].dorm,
				a[ii].bednum, a[ii].Report_Repair, a[ii].Leave);
			break;
			
			
		}
		if (ii == n-1)
		{
			printf("��ѧ��������\n");
			return;
		}
	}
	
	
	revise();
	printf("�������޸����ݣ�");
	scanf("%d", &choice_num);
	switch (choice_num)
	{
	case 1: {
		do {
			printf("�������޸ĺ�ѧ��������");
			scanf("%s", name);
			if ((strspn(name, "abcdefghijklmnopqrstuvwxyz") != strlen(name)) || strlen(name) >= 20) //�ж��Ƿ�ȫ����ĸ
				printf("�����������������");
			else break;
		} while (1); 
		strcpy(a[ii].name, name);
		break;
		
	}
		
	case 2: {
		do {
			printf("�������޸ĺ�༶��");
			scanf("%s", class);
			if ((strspn(class, "0123456789") != strlen(class)) || strlen(class) != 6)
				printf("�����������������");
			else break;
		} while (1);
		strcpy(a[ii].class, class); 
		break;
		
	}

	case 3: {
		do {
			printf("�������޸ĺ�����ţ�");
			scanf("%s", dorm);
			if ((strspn(dorm, "0123456789NS") != strlen(dorm)) || strlen(dorm) != 5)
				printf("�����������������");
			else break;
		} while (1);
		strcpy(a[ii].dorm, dorm); 
		break;
		
	}

	case 4: {
		do {
			printf("�������޸ĺ�λ��");
			scanf("%s", bednum);
			if ((strspn(bednum, "123456") == strlen(bednum)) && strlen(bednum) == 1)
				break;
			else printf("�����������������\n");
		} while (1); 
		strcpy(a[ii].bednum, bednum); 
		break;
		
	}

	case 5: {
		if (a[ii].Report_Repair == 0)
			a[ii].Report_Repair = 1;
		else
			a[ii].Report_Repair = 0;
	}

	case 6: {
		if (a[ii].Leave == 0)
			a[ii].Leave = 1;
		else
			a[ii].Leave = 0;
	}; break;
	}
	printf("����	�༶	ѧ��		�����	��λ	���	����\n");
	printf("%s	%s	%s	%s	%s	%d	%d\n", a[ii].name,  a[ii].class, a[ii].num, a[ii].dorm,
		a[ii].bednum, a[ii].Report_Repair, a[ii].Leave);
	fp = fopen("StuInform.txt", "wb+");
	for (int x = 0; x < n; x++)
	{
			
			fwrite(&a[x], sizeof(STU), 1, fp);
		
	}
	fclose(fp);
	printf("-----�޸ĳɹ�-----\n");
	
}


void Stu_Rev1(Stu_ID)
{
	int i = 0, ii, y = 0;
	FILE* fp;
	fp = fopen("StuInform.txt", "r");
	STU a[N];
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

	for (ii = 0; ii < n; ii++)
	{
		if (!strcmp(a[ii].num, Stu_ID))
		{
			printf("����	�༶	ѧ��		�����	��λ	���	����\n");
			printf("%s	%s	%s	%s	%s	%d	%d\n", a[ii].name, a[ii].class,a[ii].num, a[ii].dorm,
				a[ii].bednum, a[ii].Report_Repair, a[ii].Leave);
			break;
		}
		if (ii == n - 1)
		{
			printf("��ѧ��������\n");
			return;
		}
	}

	fclose(fp);

	if (a[ii].Report_Repair == 0)
		a[ii].Report_Repair = 1;
	else
		a[ii].Report_Repair = 0;
	printf("����	�༶	ѧ��		�����	��λ	���	����\n");
	printf("%s	%s	%s	%s	%s	%d	%d\n", a[ii].name, a[ii].class, a[ii].num, a[ii].dorm,
		a[ii].bednum, a[ii].Report_Repair, a[ii].Leave);

	fp = fopen("StuInform.txt", "w+");
	for (int x = 0; x < n; x++)
		fwrite(&a[x], sizeof(STU), 1, fp);
	fclose(fp);
	printf("---------------------------�޸ĳɹ�--------------------------\n");
}

void Stu_Rev2(Stu_ID)
{
	int i = 0, ii, y = 0;
	FILE* fp;
	fp = fopen("StuInform.txt", "r");
	STU a[N];
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

	for (ii = 0; ii < n; ii++)
	{
		if (!strcmp(a[ii].num, Stu_ID))
		{
			printf("����	�༶	ѧ��		�����		��λ	���	����\n");
			printf("%s	%s	%s	%s		%s	%d	%d\n", a[ii].name, a[ii].class, a[ii].num, a[ii].dorm,
				a[ii].bednum, a[ii].Report_Repair, a[ii].Leave);
			break;
		}
		if (ii == n - 1)
		{
			printf("��ѧ��������\n");
			return;
		}
	}

	fclose(fp);

	if (a[ii].Leave == 0)
		a[ii].Leave = 1;
	else
		a[ii].Leave = 0;
	printf("����	�༶	ѧ��		�����		��λ	���	����\n");
	printf("%s	%s	%s	%s		%s	%d	%d\n", a[ii].name, a[ii].class, a[ii].num, a[ii].dorm,
		a[ii].bednum, a[ii].Report_Repair, a[ii].Leave);

	fp = fopen("StuInform.txt", "wb+");
	for (int x = 0; x < n; x++)
		fwrite(&a[x], sizeof(STU), 1, fp);
		
	fclose(fp);
	printf("---------------------------�޸ĳɹ�--------------------------\n");
}