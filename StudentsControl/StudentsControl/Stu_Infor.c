#include"Main.h"
#pragma
void getInform()
{
    FILE* fp;
    fp = fopen("StuInform.txt", "a+");
    int getNum , i ;//getNum¼��ѧ��������iѭ��¼��ѧ����Ϣ
    printf("������¼��ѧ��������");
    scanf("%d", &getNum);
    STU a[10];
    for (i = 0; i < getNum;i++)
    {
        while (1)
        {
            printf("������ѧ��������");
            scanf("%s", a[i].name);
            if ((strspn(a[i].name, "abcdefghijklmnopqrstuvwxyz") != strlen(a[i].name)) || strlen(a[i].name) >= 20) //�ж��Ƿ�ȫ����ĸ
                printf("�����������������\n");
            else break;
        };
              
        while (1)
        {
            printf("������ѧ��ѧ�ţ�");
            scanf("%s", a[i].num);
            if ((strspn(a[i].num, "0123456789") != strlen(a[i].num)) || strlen(a[i].num) != 8) //�ж��Ƿ�ȫΪ����
                printf("�����������������\n");
            else break;
        };
        
        while (1)
        {
            printf("������༶��");
            scanf("%s", a[i].class);
            if ((strspn(a[i].class, "0123456789") != strlen(a[i].class)) || strlen(a[i].class) != 6)
                printf("�����������������\n");
            else break;
        };

        while (1)
        {
            printf("����������ţ�");
            scanf("%s", a[i].dorm);
            if ((strspn(a[i].dorm, "0123456789NS") != strlen(a[i].dorm)) || strlen(a[i].dorm) != 5)
                printf("�����������������\n");
            else break;
        };

        while (1)
        {
            printf("�����봲λ��");
            scanf("%s", a[i].bednum);
            if ((strspn(a[i].bednum, "123456") == strlen(a[i].bednum)) && strlen(a[i].bednum) == 1)
                break;
            else printf("�����������������\n");
        };

        a[i].Report_Repair = 0;
        a[i].Leave = 0;
        fwrite(&a[i], sizeof(STU), 1, fp);
        printf("¼��ɹ�\n");
    };
    //fwrite(a, sizeof(STU), getNum, fp);
    fclose(fp);
};