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
		PrimaryMenu();//ѡ�����,1ѧ��2�޹�
		choice = Choice();
		switch (choice)
		{
		case 1:do//ѧ��
		{
			secondMenu();
			choice1 = Choice();
			switch (choice1)
			{
			case 1://��¼
			{
				x = Student_Login();
				strcpy(Stu_ID, x.username);//��¼�ɹ�
				do {
					stuMenu();//��ѧ������Ŀ¼
					choice2 = Choice();
					switch (choice2)//ִ��ѧ����ִ�еĲ���
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
				Register(); //ע��
				x = Student_Login();
				strcpy(Stu_ID, x.username);//ע��ɹ����¼
				do {
					stuMenu();//��ѧ������Ŀ¼
					choice2 = Choice();
					switch (choice2)//ִ��ѧ����ִ�еĲ���
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

		case 2: do {          //�޹�
			admMenu();
			choice2 = Choice();
			switch (choice2)
			{
			case 1:Qurey(); break;//��ѯ
			case 2: {
				Rev_Class();
				choice3 = Choice();
				switch (choice3) {
				case 1:Search_infor1(); break;
				case 2:Search_infor2(); break;
				case 3:Search_infor3(); break;
				}

			}; break;//����
			case 3:getInform(); break;//¼��
			case 4:Inf_Rev(); break;//�޸�
			case 5:Delet_Infor(); break;//ɾ��
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
