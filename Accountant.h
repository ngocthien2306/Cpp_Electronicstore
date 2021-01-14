#pragma once
#include"Employee.h"
class Accountant: public Employee
{
private:
	double Allowance = 0;
public:
	Accountant(string name, string id, string bday, string daytowork, int num = 0, int salary = 0, double allowance = 0);
	Accountant();
	~Accountant();
	void InputEmployee();
	void OutputEmployee();
	double CalculateSalary();
	double GetAllowance();
	void SetAllwance(double allwance);
};

