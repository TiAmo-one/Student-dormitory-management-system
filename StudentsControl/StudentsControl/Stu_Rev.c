#include"Main.h"
#define N 9

void Inf_Rev()
{
	int i = 0,ii=0,y=0;
	char stand_in[N];
	int choice_num;
	char name[N];
	char num[N]; //学号
	char class[N]; //班级
	char dorm[N]; //宿舍号
	char bednum[N]; //床位
	int Report_Repair; //报修
	int Leave;//请假
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

	printf("请输入修改学生的学号：");
	scanf("%s", stand_in);
	for (ii ; ii < n; ii++)
	{
		
		if (!strcmp(a[ii].num, stand_in))
		{
			printf("姓名	班级	学号		宿舍号	床位	请假	报修\n");
			printf("%s	%s	%s	%s	%s	%d	%d\n", a[ii].name, a[ii].class, a[ii].num, a[ii].dorm,
				a[ii].bednum, a[ii].Report_Repair, a[ii].Leave);
			break;
			
			
		}
		if (ii == n-1)
		{
			printf("该学生不存在\n");
			return;
		}
	}
	
	
	revise();
	printf("请输入修改内容：");
	scanf("%d", &choice_num);
	switch (choice_num)
	{
	case 1: {
		do {
			printf("请输入修改后学生姓名：");
			scanf("%s", name);
			if ((strspn(name, "abcdefghijklmnopqrstuvwxyz") != strlen(name)) || strlen(name) >= 20) //判断是否全是字母
				printf("输入错误，请重新输入");
			else break;
		} while (1); 
		strcpy(a[ii].name, name);
		break;
		
	}
		
	case 2: {
		do {
			printf("请输入修改后班级：");
			scanf("%s", class);
			if ((strspn(class, "0123456789") != strlen(class)) || strlen(class) != 6)
				printf("输入错误，请重新输入");
			else break;
		} while (1);
		strcpy(a[ii].class, class); 
		break;
		
	}

	case 3: {
		do {
			printf("请输入修改后宿舍号：");
			scanf("%s", dorm);
			if ((strspn(dorm, "0123456789NS") != strlen(dorm)) || strlen(dorm) != 5)
				printf("输入错误，请重新输入");
			else break;
		} while (1);
		strcpy(a[ii].dorm, dorm); 
		break;
		
	}

	case 4: {
		do {
			printf("请输入修改后床位：");
			scanf("%s", bednum);
			if ((strspn(bednum, "123456") == strlen(bednum)) && strlen(bednum) == 1)
				break;
			else printf("输入错误，请重新输入\n");
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
	printf("姓名	班级	学号		宿舍号	床位	请假	报修\n");
	printf("%s	%s	%s	%s	%s	%d	%d\n", a[ii].name,  a[ii].class, a[ii].num, a[ii].dorm,
		a[ii].bednum, a[ii].Report_Repair, a[ii].Leave);
	fp = fopen("StuInform.txt", "wb+");
	for (int x = 0; x < n; x++)
	{
			
			fwrite(&a[x], sizeof(STU), 1, fp);
		
	}
	fclose(fp);
	printf("-----修改成功-----\n");
	
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
			printf("姓名	班级	学号		宿舍号	床位	请假	报修\n");
			printf("%s	%s	%s	%s	%s	%d	%d\n", a[ii].name, a[ii].class,a[ii].num, a[ii].dorm,
				a[ii].bednum, a[ii].Report_Repair, a[ii].Leave);
			break;
		}
		if (ii == n - 1)
		{
			printf("该学生不存在\n");
			return;
		}
	}

	fclose(fp);

	if (a[ii].Report_Repair == 0)
		a[ii].Report_Repair = 1;
	else
		a[ii].Report_Repair = 0;
	printf("姓名	班级	学号		宿舍号	床位	请假	报修\n");
	printf("%s	%s	%s	%s	%s	%d	%d\n", a[ii].name, a[ii].class, a[ii].num, a[ii].dorm,
		a[ii].bednum, a[ii].Report_Repair, a[ii].Leave);

	fp = fopen("StuInform.txt", "w+");
	for (int x = 0; x < n; x++)
		fwrite(&a[x], sizeof(STU), 1, fp);
	fclose(fp);
	printf("---------------------------修改成功--------------------------\n");
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
			printf("姓名	班级	学号		宿舍号		床位	请假	报修\n");
			printf("%s	%s	%s	%s		%s	%d	%d\n", a[ii].name, a[ii].class, a[ii].num, a[ii].dorm,
				a[ii].bednum, a[ii].Report_Repair, a[ii].Leave);
			break;
		}
		if (ii == n - 1)
		{
			printf("该学生不存在\n");
			return;
		}
	}

	fclose(fp);

	if (a[ii].Leave == 0)
		a[ii].Leave = 1;
	else
		a[ii].Leave = 0;
	printf("姓名	班级	学号		宿舍号		床位	请假	报修\n");
	printf("%s	%s	%s	%s		%s	%d	%d\n", a[ii].name, a[ii].class, a[ii].num, a[ii].dorm,
		a[ii].bednum, a[ii].Report_Repair, a[ii].Leave);

	fp = fopen("StuInform.txt", "wb+");
	for (int x = 0; x < n; x++)
		fwrite(&a[x], sizeof(STU), 1, fp);
		
	fclose(fp);
	printf("---------------------------修改成功--------------------------\n");
}