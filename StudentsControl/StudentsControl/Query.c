#include"Main.h"

//查询学生信息
void Qurey()
{
	int i = 0,n;
	FILE* fp;
	fp = fopen("StuInform.txt","r");
	if (fp == NULL)
	{
		printf("未录入学生信息");
		return;
	};
	STU a[100];
	printf("姓名	班级	学号		宿舍号	床位	请假	报修\n");
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