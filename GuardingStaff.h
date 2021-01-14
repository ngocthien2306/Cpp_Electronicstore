#pragma once
#include"Employee.h"
class GuardingStaff : public Employee
{
private:
	int ShiftWork = 0;
public:
	GuardingStaff(string name, string id, string bday, string daytowork, int num = 0, int salary = 0, int shift = 0);
	GuardingStaff();
	~GuardingStaff();
	void InputEmployee();
	void OutputEmployee();
	double CalculateSalary();
	double GetAllowance();
	int GetShiftWork();
	void SetShiftWork(int shift);
};

