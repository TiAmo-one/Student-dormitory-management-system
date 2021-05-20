#include"Main.h"



struct user Student_Login()
{
	int x = 1;
	int i = 0;
	int j = 0;
	FILE* fp;
	fp = fopen("Register.txt", "r");
	USER a[10],b;
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


	fp = fopen("Register.txt", "r");
		while (1)
		{
			printf("----登录----\n");
			printf("请输入学号：");
			scanf("%s", b.username);
			if ((strspn(b.username, "0123456789") != strlen(b.username)) || strlen(b.username) != 8)
				printf("学号不存在，请重新输入\n");
			else break;
		};
		printf("请输入密码：");
		scanf("%s", b.password);
			for (j =0 ; j < i; j++)
			{
				fread(&a[j], sizeof(USER), 1, fp);
				if (!strcmp(a[j].username, b.username))
				{
					if (!strcmp(a[j].password, b.password))
					{
						printf("登录成功\n");
						fclose(fp);
						return b;
					}
					else
						continue;
				}
				else
					continue;
			};
			printf("账号或密码错误\n");
			Student_Login();
};