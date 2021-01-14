#include "Employee.h"
Employee::Employee() {

}

string Employee::GetNameEmployee() {
	return this->NameEmployee;
}
void Employee::SetNameEmployee(string name) {
	this->NameEmployee = name;
}
string Employee::GetIDEmployee() {
	return this->IDEmployee;
}
void Employee::SetIDEmployee(string id) {
	this->IDEmployee = id;
}
int Employee::GetWorkEmployee() {
	return this->NumberWork;
}
void Employee::SetWorkEmployee(int num) {
	this->NumberWork = num;
}
int Employee::GetSalaryEmployee() {
	return this->Salaryperday;
}
void Employee::SetSalaryEmployee(int salary) {
	this->Salaryperday = salary;
}
string Employee::GetBirthDayEmployee() {
	return this->BirthDay;
}
void Employee::SetBirthDayEmployee(string bday) {
	this->BirthDay = bday;
}
string Employee::GetDaytoWorkEmployee() {
	return DaytoWork;
}
void Employee::SetDaytoWorkEmployee(string daytowork) {
	this->DaytoWork = daytowork;
}
Employee::Employee(string name, string id, string bday, string daytowork, int num, int salary) {
	NameEmployee = name;
	IDEmployee = id;
	BirthDay = bday;
	DaytoWork = daytowork;
	NumberWork = num;
	Salaryperday = salary;
}
Employee::~Employee() {

}
void Employee::InputEmployee() {
	string a;
	getline(cin, a);
	cout << "\nEnter name: ";
	getline(cin, NameEmployee);
	cout << "\nEnter ID: ";
	getline(cin, IDEmployee);
	cout << "\nEnter your birth day (dd/mm/yyyy): ";
	getline(cin, BirthDay);
	cout << "\nEnter the day begin to work (dd//mm/yyyy): ";
	getline(cin, DaytoWork);
	cout << "\nEnter number of work: ";
	cin >> NumberWork;
	cout << "\nEnter salary perday ($): ";
	cin >> Salaryperday;
}
void Employee::OutputEmployee() {
	cout << "\nName: " << NameEmployee;
	cout << "\nID: " << IDEmployee;
	cout << "\nBirth day: " << BirthDay;
	cout << "\nDay to work: " << DaytoWork;
	cout << "\nNumber of work: " << NumberWork;
	cout << "\nSalary perday: " << Salaryperday;
}
