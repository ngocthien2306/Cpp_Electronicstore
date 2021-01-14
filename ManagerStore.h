#pragma once
#include"Employee.h"
class ManagerStore : public Employee
{
private:
	int NumofContract = 0;
public:
	ManagerStore(string name, string id, string bday, string daytowork, int num = 0, int salary = 0, int numcons = 0);
	ManagerStore();
	~ManagerStore();
	void InputEmployee();
	void OutputEmployee();
	double CalculateSalary();
	int GetNumofContract();
	void SetNumofContract(int numcons);
};

