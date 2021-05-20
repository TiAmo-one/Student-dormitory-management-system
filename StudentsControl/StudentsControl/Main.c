#include "Main.h"


void main()
{
	int choice = 1;
	int choice1 = 1;
	int choice2 = 1;
	int choice3 = 1;
	int Test_Num;
	char Stu_ID[20];
	struct user x;
	char* y;
	File_Readable();
	do{
		PrimaryMenu();//选择身份,1学生2宿管
		choice = Choice();
		switch (choice)
		{
		case 1:do//学生
		{
			secondMenu();
			choice1 = Choice();
			switch (choice1)
			{
			case 1://登录
			{
				x = Student_Login();
				strcpy(Stu_ID, x.username);//登录成功
				do {
					stuMenu();//打开学生操作目录
					choice2 = Choice();
					switch (choice2)//执行学生可执行的操作
					{
					case 1:Stu_Rev1(Stu_ID); break;
					case 2:Stu_Rev2(Stu_ID); break;
					case 0:Test_Num = 1; break;
					default:
						break;
					}
				} while (choice2 != 0);
			}; break;

			case 2: {
				Register(); //注册
				x = Student_Login();
				strcpy(Stu_ID, x.username);//注册成功后登录
				do {
					stuMenu();//打开学生操作目录
					choice2 = Choice();
					switch (choice2)//执行学生可执行的操作
					{
					case 1:Stu_Rev1(Stu_ID); break;
					case 2:Stu_Rev2(Stu_ID); break;
					case 0:; break;
					default:
						break;
					};
				} while (choice2 != 0); break;

			case 0:break;

			default:break;
			}; break;
			}
		} while (choice1 != 0); break;

		case 2: do {          //宿管
			admMenu();
			choice2 = Choice();
			switch (choice2)
			{
			case 1:Qurey(); break;//查询
			case 2: {
				Rev_Class();
				choice3 = Choice();
				switch (choice3) {
				case 1:Search_infor1(); break;
				case 2:Search_infor2(); break;
				case 3:Search_infor3(); break;
				}

			}; break;//搜索
			case 3:getInform(); break;//录入
			case 4:Inf_Rev(); break;//修改
			case 5:Delet_Infor(); break;//删除
			case 0:break;
			default:
				break;
			};

		} while (choice2 != 0); break;

		case 0:exit(0); break;

		default:break;
		}
	} while (choice != 0);
};
