#include"Main.h"
#pragma
void getInform()
{
    FILE* fp;
    fp = fopen("StuInform.txt", "a+");
    int getNum , i ;//getNum录入学生人数，i循环录入学生信息
    printf("请输入录入学生人数：");
    scanf("%d", &getNum);
    STU a[10];
    for (i = 0; i < getNum;i++)
    {
        while (1)
        {
            printf("请输入学生姓名：");
            scanf("%s", a[i].name);
            if ((strspn(a[i].name, "abcdefghijklmnopqrstuvwxyz") != strlen(a[i].name)) || strlen(a[i].name) >= 20) //判断是否全是字母
                printf("输入错误，请重新输入\n");
            else break;
        };
              
        while (1)
        {
            printf("请输入学生学号：");
            scanf("%s", a[i].num);
            if ((strspn(a[i].num, "0123456789") != strlen(a[i].num)) || strlen(a[i].num) != 8) //判断是否全为数字
                printf("输入错误，请重新输入\n");
            else break;
        };
        
        while (1)
        {
            printf("请输入班级：");
            scanf("%s", a[i].class);
            if ((strspn(a[i].class, "0123456789") != strlen(a[i].class)) || strlen(a[i].class) != 6)
                printf("输入错误，请重新输入\n");
            else break;
        };

        while (1)
        {
            printf("请输入宿舍号：");
            scanf("%s", a[i].dorm);
            if ((strspn(a[i].dorm, "0123456789NS") != strlen(a[i].dorm)) || strlen(a[i].dorm) != 5)
                printf("输入错误，请重新输入\n");
            else break;
        };

        while (1)
        {
            printf("请输入床位：");
            scanf("%s", a[i].bednum);
            if ((strspn(a[i].bednum, "123456") == strlen(a[i].bednum)) && strlen(a[i].bednum) == 1)
                break;
            else printf("输入错误，请重新输入\n");
        };

        a[i].Report_Repair = 0;
        a[i].Leave = 0;
        fwrite(&a[i], sizeof(STU), 1, fp);
        printf("录入成功\n");
    };
    //fwrite(a, sizeof(STU), getNum, fp);
    fclose(fp);
};