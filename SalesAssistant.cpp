#include "SalesAssistant.h"
SalesAssistant::SalesAssistant()  {

}
SalesAssistant::SalesAssistant(string name, string id, string bday,
	string daytowork, int num, int salary, int sales) :
	Employee(name, id, bday, daytowork, num, salary) {
	NumOfProductSold = sales;
}
SalesAssistant::~SalesAssistant() {

}
int SalesAssistant::GetNumSold() {
	return this->NumOfProductSold;
}
void SalesAssistant::SetNumSold(int sales) {
	this->NumOfProductSold = sales;
}
void SalesAssistant::InputEmployee() {
	CalculateSalary();
	Employee::InputEmployee();
	cout << "\nEnter the number of product was saled: ";
	cin >> NumOfProductSold;
}
void SalesAssistant::OutputEmployee() {
	Employee::OutputEmployee();
	cout << "\nProduct saled: " << NumOfProductSold;
	cout << "\nSalary: " << CalculateSalary();
}
double SalesAssistant::CalculateSalary() {
	return (double)NumberWork * (double)Salaryperday + (double)NumOfProductSold * double(3);;
}