#include<iostream>
#include<conio.h>
using namespace std;


class Employee 
{
protected:
	int eid;
	char name[10];
	double basic;
public:
	Employee();
	Employee(int, const char*, double);
	void virtual accept();
	void virtual display();
	double virtual CalSal()=0;

};
class Programmer : public Employee
{
	int extraHrs, costPerHrs;
public:
	Programmer();
	Programmer(int, const char*, double, int, int);
	void accept();
	void display();
	double CalSal();

};
class Admin : public Employee
{
	double incentive;
public:
	Admin();
	Admin(int, const char*, double, double);
	void accept();
	void display();
	double CalSal();

};
class SalesMgr : public Employee
{
	int target;
	double comm;
public:
	SalesMgr();
	SalesMgr(int, const char*, double, int, double);
	void accept();
	void display();
	double CalSal();

};