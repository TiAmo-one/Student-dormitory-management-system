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
			printf("----��¼----\n");
			printf("������ѧ�ţ�");
			scanf("%s", b.username);
			if ((strspn(b.username, "0123456789") != strlen(b.username)) || strlen(b.username) != 8)
				printf("ѧ�Ų����ڣ�����������\n");
			else break;
		};
		printf("���������룺");
		scanf("%s", b.password);
			for (j =0 ; j < i; j++)
			{
				fread(&a[j], sizeof(USER), 1, fp);
				if (!strcmp(a[j].username, b.username))
				{
					if (!strcmp(a[j].password, b.password))
					{
						printf("��¼�ɹ�\n");
						fclose(fp);
						return b;
					}
					else
						continue;
				}
				else
					continue;
			};
			printf("�˺Ż��������\n");
			Student_Login();
};