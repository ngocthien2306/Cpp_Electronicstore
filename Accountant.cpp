#include "Accountant.h"
Accountant::Accountant() {

}
Accountant::Accountant(string name, string id, string bday, 
	string daytowork, int num, int salary, double allowance) :
	Employee(name, id, bday, daytowork, num, salary) {
	Allowance = allowance;
}
double Accountant::GetAllowance() {
	return this->Allowance;
}
void Accountant::SetAllwance(double allowance) {
	this->Allowance = allowance;
}
Accountant::~Accountant() {

}
void Accountant::InputEmployee() {
	CalculateSalary();
	Employee::InputEmployee();
	cout << "\nEnter the allowance of the employee: ";
	cin >> Allowance;
}
void Accountant::OutputEmployee() {
	Employee::OutputEmployee();
	cout << "\nAllwance: " << Allowance;
	cout << "\nSalary: " << CalculateSalary() << " $ ";
	cout << "\n";
} 
double Accountant::CalculateSalary() {
	double a;
	a = (double)NumberWork * (double)Salaryperday + Allowance;
	return a;
}