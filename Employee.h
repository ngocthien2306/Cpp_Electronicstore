#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employee
{
protected:
	string NameEmployee;
	string IDEmployee;
	string BirthDay;
	string DaytoWork;
	int NumberWork = 0;
	int Salaryperday = 0;
public:
	Employee();
	~Employee();
	Employee(string name, string id, string bday, string daytowork, int num = 0, int salary = 0);
	virtual void InputEmployee() = 0;
	virtual void OutputEmployee() = 0;
	virtual double CalculateSalary() = 0;
	string GetNameEmployee();
	void SetNameEmployee(string name);
	string GetIDEmployee();
	void SetIDEmployee(string id);
	int GetWorkEmployee();
	void SetWorkEmployee(int num);
	int GetSalaryEmployee();
	void SetSalaryEmployee(int salary);
	string GetBirthDayEmployee();
	void SetBirthDayEmployee(string bday);
	string GetDaytoWorkEmployee();
	void SetDaytoWorkEmployee(string daytowork);

};

