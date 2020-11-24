#include"Emp.h"

/*---------Employee-----------*/
Employee::Employee()
{
	this->eid = 0;
	this->basic = 0.0;
}
Employee::Employee(int id, const char *str, double bas) 
{
	this->eid = id;
	strcpy(this->name, str);
	this->basic = bas;
}
void Employee::display()
{
	cout << "Emp Id:: " << this->eid << endl;
	cout << "Emp Name:: " << this->name << endl;

	cout << "Emp Basics:: " << this->basic << endl;

}
void Employee::accept()
{
	cout << "Emp Id:: ";
	cin>> this->eid;
	cout << "Emp Name:: ";
	cin>> this->name;

	cout << "Emp Basics:: ";
	cin>> this->basic;

}

/*------------Programmer----------*/
Programmer::Programmer()
{
	this->costPerHrs = 0;
	this->extraHrs = 0;
}
Programmer::Programmer(int id, const char*str, double bas, int c, int ex) :Employee(id, str, bas)
{
	this->costPerHrs = c;
	this->extraHrs = ex;
}
void Programmer::accept() {
	Employee::accept();
	cout << " Programmers CostperHr:: ";
	cin >> this->costPerHrs;
	cout << "Extra Hr:: ";
	cin>> this->extraHrs;

}
void Programmer::display()
{
	Employee::display();
	cout << " Programmers CostperHr:: " << this->costPerHrs << "Extra Hr:: " << this->extraHrs << endl;
}
double Programmer::CalSal()
{
	return this->basic + this->costPerHrs + this->extraHrs;
}
/*------------Admin----------*/
Admin::Admin()
{
	this->incentive = 0;
}
Admin::Admin(int id, const char*str, double bas, double i) :Employee(id, str,bas)
{
	this->incentive = i;
}
void Admin::display()
{
	Employee::display();
	cout << " Admin incentive:: " << this->incentive << endl;
}
void Admin::accept()
{
	Employee::accept();
	cout << " Admin incentive:: ";
	cin>>this->incentive;
}
double Admin::CalSal()
{
	return this->basic + this->incentive;
}
/*------------SalesMgr----------*/
SalesMgr::SalesMgr()
{
	this->target = 0;
	this->comm = 0;
}
SalesMgr::SalesMgr(int id, const char*str, double bas, int t, double com) :Employee(id, str, bas)
{
	this->target = t;
	this->comm = com;
}
void SalesMgr::display()
{
	Employee::display();
	cout << " SalesMgr target:: " << this->target << " Commision:: " << this->comm << endl;
	cout << "Computed salary:: " << CalSal();
}
void SalesMgr::accept()
{
	Employee::accept();
	cout << " SalesMgr target:: ";
	cin >> this->target;
	cout << " Commision:: ";
	cin >> this->comm;
}
double SalesMgr::CalSal()
{
	return this->basic + (this->target * this->comm);
}
