#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void PrimaryMenu()
{
	printf("-----欢迎使用学生宿舍管理系统-----\n");
	printf("------------您的身份--------------\n");
	printf("-------------1.学生---------------\n");
	printf("-------------2.宿管---------------\n");
	printf("-------------0.退出---------------\n");
	printf("----------------------------------\n");
};
void secondMenu()
{
	printf("-------------1.登录---------------\n");
	printf("-------------2.注册---------------\n");
	printf("-------------0.返回---------------\n");
}
void stuMenu()
{
	printf("------您的操作------\n");
	printf("-------1.请假-------\n");
	printf("-------2.报修-------\n");
	printf("-------0.返回-------\n");
	printf("--------------------\n");
};

void admMenu()
{
	printf("------您的操作------\n");
	printf("---1.查询学生信息---\n");
	printf("---2.搜索学生信息---\n");
	printf("---3.录入学生信息---\n");
	printf("---4.修改学生信息---\n");
	printf("---5.删除学生信息---\n");
	printf("---0.返回-----------\n");
};

void revise()
{
	printf("------修改信息------\n");
	printf("-------1.姓名-------\n");
	printf("-------2.班级-------\n");
	printf("------3.宿舍号------\n");
	printf("-------4.床位-------\n");
	printf("-------5.报修-------\n");
	printf("-------6.请假-------\n");
}

void Stu_Rev_Menu()
{
	printf("-------1.报修-------\n");
	printf("-------2.请假-------\n");
}

void Rev_Class()
{
	printf("------分类查询------\n");
	printf("-------1.学号-------\n");
	printf("------2.宿舍号------\n");
	printf("-------3.班级-------\n");
}