#include"Main.h"

void Search_infor1()
{
	STU a[10],b,c[10];
	int i = 0,n,m=0;//m判断是否存在该学生
	printf("-------------------\n");
	printf("请输入搜索学生学号:");
	scanf("%s",b.num);
	FILE* fp;
	fp = fopen("StuInform.txt", "r");

	while (1)
	{
		if (!feof(fp))
		{
			fread(&a[i], sizeof(STU), 1, fp);

			i++;
		}
		else break;
	};
	fclose(fp);

	fp = fopen("StuInform.txt", "rb");
	n = i - 1;
	printf("姓名	班级	学号		宿舍号	床位	请假	报修\n");
	for (int k = 0; k < n; k++)
	{
		fread(&c[k], sizeof(STU), 1, fp);
		if (!strcmp(c[k].num, b.num))
			printf("%s	%s	%s	%s	%s	%d	%d\n", c[k].name, c[k].class, c[k].num, c[k].dorm, c[k].bednum, c[k].Report_Repair, c[k].Leave);
			break;
		m++;
	};
	if (n == m)
		printf("------------------未搜索到该学生信息-----------------\n");
	fclose(fp);
};

void Search_infor2()
{
	STU a[10], b, c[10];
	int i = 0, n, m = 0;//m判断是否存在该学生
	printf("-------------------\n");
	printf("请输入搜索学生宿舍号:");
	scanf("%s", b.dorm);
	FILE* fp;
	fp = fopen("StuInform.txt", "r");

	while (1)
	{
		if (!feof(fp))
		{
			fread(&a[i], sizeof(STU), 1, fp);

			i++;
		}
		else break;
	};
	fclose(fp);

	fp = fopen("StuInform.txt", "rb");
	n = i - 1;
	printf("姓名	班级	学号		宿舍号	床位	请假	报修\n");
	for (int k = 0; k < n; k++)
	{
		fread(&c[k], sizeof(STU), 1, fp);
		if (!strcmp(c[k].dorm, b.dorm))
			printf("%s	%s	%s	%s	%s	%d	%d\n", c[k].name, c[k].class, c[k].num, c[k].dorm, c[k].bednum, c[k].Report_Repair, c[k].Leave);
		else
			m++;
	};
	if (n == m)
		printf("------------------未搜索到该学生信息-----------------\n");
	fclose(fp);
};

void Search_infor3()
{
	STU a[10], b, c[10];
	int i = 0, n, m = 0;//m判断是否存在该学生
	printf("-------------------\n");
	printf("请输入搜索学生班级:");
	scanf("%s", b.class);
	FILE* fp;
	fp = fopen("StuInform.txt", "r");

	while (1)
	{
		if (!feof(fp))
		{
			fread(&a[i], sizeof(STU), 1, fp);

			i++;
		}
		else break;
	};
	fclose(fp);

	fp = fopen("StuInform.txt", "rb");
	n = i - 1;
	printf("姓名	班级	学号		宿舍号	床位	请假	报修\n");
	for (int k = 0; k < n; k++)
	{
		fread(&c[k], sizeof(STU), 1, fp);
		if (!strcmp(c[k].class, b.class))
			printf("%s	%s	%s	%s	%s	%d	%d\n", c[k].name, c[k].class, c[k].num, c[k].dorm, c[k].bednum, c[k].Report_Repair, c[k].Leave);
		else
			m++;
	};
	if (n == m)
		printf("------------------未搜索到该学生信息-----------------\n");
	fclose(fp);
};