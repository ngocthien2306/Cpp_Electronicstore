#include "ManagerStore.h"
ManagerStore::ManagerStore() {

}
ManagerStore::ManagerStore(string name, string id, string bday, string daytowork, int num, int salary, int numcons) :
	Employee(name, id, bday, daytowork, num, salary) {

}

ManagerStore::~ManagerStore() {

}
int ManagerStore::GetNumofContract() {
	return this->NumofContract;
}
void ManagerStore::SetNumofContract(int numcons) {
	this->NumofContract = numcons;
}
void ManagerStore::InputEmployee() {
	CalculateSalary();
	Employee::InputEmployee();
	cout << "\nEnter the number of contract signed: ";
	cin >> NumofContract;
}
void ManagerStore::OutputEmployee() {
	Employee::OutputEmployee();
	cout << "\nNumber of contract: " << NumofContract;
	cout << "\nSalary: " << CalculateSalary();
}
double ManagerStore::CalculateSalary() {
	return (double)Salaryperday * (double)NumberWork + (double)NumberWork * 40;
}