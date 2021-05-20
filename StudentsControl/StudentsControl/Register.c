#include"Main.h"
void Register()
{
	char test[20];
	FILE* fp;
	fp = fopen("Register.txt", "r");
	USER a[10],b;
	int i = 0;
	int n = 0;
	int x = 0;
	//struct user a = { "h","1"};
	
	printf("------注册------\n");
	while (1)
	{
		printf("请输入学号：");
		scanf("%s", b.username);
		if ((strspn(b.username, "0123456789") == strlen(b.username)) && strlen(b.username) == 8)
			break;
		else printf("学号不存在，请重新输入\n");
	};
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
	fclose(fp);
	for (x; x < n; x++)
	{
			if (!strcmp(a[x].username, b.username))//查询文件当前用户名未重复
			{
				printf("学号已注册,请登录\n");
				Register();
			}
		}
	fp = fopen("Register.txt", "a+");
	while (1)
	{
		printf("请输入密码：");
		scanf("%s", &b.password);
		printf("请确认密码：");
		scanf("%s", &test);
		if (strcmp(b.password, test))
		{
			printf("密码不匹配，请重新输入\n");
		}
		else
		{
			fwrite(&b, sizeof(USER), 1, fp);
			printf("注册成功，请登录\n");
			fclose(fp);
			return;
		}
	};
	

};
