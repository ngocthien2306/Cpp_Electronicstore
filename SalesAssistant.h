#pragma once
#include "Employee.h"
class SalesAssistant : public Employee
{
private:
	int NumOfProductSold = 0; 
public:
	SalesAssistant(string name, string id, string bday, string daytowork, int num , int salary , int sales);
	SalesAssistant();
	~SalesAssistant();
	void InputEmployee();
	void OutputEmployee();
	double CalculateSalary();
	int GetNumSold();
	void SetNumSold(int sales);
};

