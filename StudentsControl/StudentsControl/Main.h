#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 9
void PrimaryMenu();
void secondMenu();
void stuMenu();
void admMenu();
void revise();
void Stu_Rev_Menu();
void File_Readable();
int Choice();
struct user Student_Login(void);
void Inf_Rev();
void Stu_Rev1(Stu_ID);
void Stu_Rev2(Stu_ID);
void Qurey();
void Search_infor1();
void Search_infor2();
void Search_infor3();
void getInform();
void Register();
void Delet_Infor();
void Rev_Class();

typedef struct student
{
    char name[N];
    char num[N];
    char class[N]; //∞‡º∂
    char dorm[N]; //Àﬁ…·∫≈
    char bednum[N]; //¥≤Œª
    int Report_Repair; //±®–ﬁ
    int Leave;//«ÎºŸ
}STU;

typedef struct user
{
    char username[20];
    char password[20];
}USER;

