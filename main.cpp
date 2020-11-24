#include"Emp.h"

class PrintScreen {
public:
	static void print(Employee *emp) {
		emp->display();
		cout << "Computed salary:: " << emp->CalSal()<<endl;
	}
};


int main()
{
/*
	Programmer p(101,"John",4000,3,4);
	PrintScreen::print(&p);
	Admin a(102,"Admin",5000,300);
	PrintScreen::print(&a);

	SalesMgr s(102,"Nidhi",450,20,10);
	PrintScreen::print(&s);*/

	/*ptr = &s;
	ptr->CalSal();
	ptr->display();*/

	Employee *e[3];
	int ch;
	for (int i = 0; i < 3; i++)
	{
		cout << "1.Programmer \n 2.Admin \n 3.SalesMgr" << endl;
		cout << "enter choice:: ";
		cin >> ch;
		switch (ch)
		{
		case 1:e[i] = new Programmer();
			e[i]->accept();
			break;
		case 2:e[i] = new Admin();
			e[i]->accept();
			break;
		case 3:e[i] = new SalesMgr();
			e[i]->accept();
			break;
		default: cout << "Invalid";
		}
		for (int i = 0; i < 3; i++)
		{
			PrintScreen::print(e[i]);
		}
		for (int i = 0; i < 3; i++)
		{
			delete e[i];
		}
	}
	_getch();
	return 0;
}