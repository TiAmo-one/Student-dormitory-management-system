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
	
	printf("------ע��------\n");
	while (1)
	{
		printf("������ѧ�ţ�");
		scanf("%s", b.username);
		if ((strspn(b.username, "0123456789") == strlen(b.username)) && strlen(b.username) == 8)
			break;
		else printf("ѧ�Ų����ڣ�����������\n");
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
			if (!strcmp(a[x].username, b.username))//��ѯ�ļ���ǰ�û���δ�ظ�
			{
				printf("ѧ����ע��,���¼\n");
				Register();
			}
		}
	fp = fopen("Register.txt", "a+");
	while (1)
	{
		printf("���������룺");
		scanf("%s", &b.password);
		printf("��ȷ�����룺");
		scanf("%s", &test);
		if (strcmp(b.password, test))
		{
			printf("���벻ƥ�䣬����������\n");
		}
		else
		{
			fwrite(&b, sizeof(USER), 1, fp);
			printf("ע��ɹ������¼\n");
			fclose(fp);
			return;
		}
	};
	

};
