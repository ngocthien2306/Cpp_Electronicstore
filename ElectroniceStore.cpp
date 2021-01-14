#include "ElectroniceStore.h"
#include <fstream>
#pragma warning(disable:4996)
string ElectroniceStore::GetNameStore() {
	return this->NameStore;
}
void ElectroniceStore::SetNametStore(string namestore) {
	this->NameStore = namestore;
}
void ElectroniceStore::InputEmployee() {
	string next1;
	getline(cin, next1);
	cout << "\n\t\t\t\t\tThe name of electronic store: ";
	getline(cin, NameStore);
	char choice; 
	do {
		cout << "\n\n\n\t\t\t\t\t\t-------EMPLOYEES-------\n";
		cout << "\n\t\t\t\t\t| ***   1. Add a manager           *** |\n";
		cout << "\n\t\t\t\t\t| ***   2. Add a technical staff   *** |\n";
		cout << "\n\t\t\t\t\t| ***   3. Add an accountant       *** |\n";
		cout << "\n\t\t\t\t\t| ***   4. Add a security guard    *** |\n";
		cout << "\n\t\t\t\t\t| ***   5. Add a salesman          *** |\n";
		cout << "\n\t\t\t\t\t| ***   6. Exit                    *** |\n";
		cout << "\n\t\t\t\t\tEnter your choice: ";
		cin >> choice;
		system("cls");
		Employee* employee;
		switch (choice)
		{
		case '1':
			employee = new ManagerStore;
			cout << "\nEnter the information of manager\n";
			employee->InputEmployee();
			ListEmployee.push_back(employee);
			break;
		case '2':
			employee = new TechnicalStaff;
			cout << "\nEnter the information of technical employee\n";
			employee->InputEmployee();
			ListEmployee.push_back(employee);
			break;
		case '3':
			employee = new Accountant;
			cout << "\nEnter the information of accountant employee\n";
			employee->InputEmployee();
			ListEmployee.push_back(employee);
			break;
		case '4':
			employee = new GuardingStaff;
			cout << "\nEnter the information of guarding employee\n";
			employee->InputEmployee();
			ListEmployee.push_back(employee);
			break;
		case '5':
			employee = new SalesAssistant;
			cout << "\nEnter the information of saleman \n";
			employee->InputEmployee();
			ListEmployee.push_back(employee);
			break;
		case '6':
			break;
		default:
			cout << "\nYour choice is ERROR! Please choice again!\n";
			break;
		}
	} while (choice != '6');
}
void ElectroniceStore::InputProduct() {
	CalculateProduct();
	string next;
	getline(cin, next);
	cout << "\n\t\t\t\t\tThe name of electronic store: ";
	getline(cin, NameStore);
	char choice;
	do {
		cout << "\n\n\n\t\t\t\t\t\t******PRODUCTS******\n";
		cout << "\n\t\t\t\t\t[   ----  1. Add a tivi     ----   ]\n";
		cout << "\n\t\t\t\t\t[   ----  2. Add a phone    ----   ]\n";
		cout << "\n\t\t\t\t\t[   ----  3. Add a laptop   ----   ]\n";
		cout << "\n\t\t\t\t\t[   ----  4. Add a fridge   ----   ]\n";
		cout << "\n\t\t\t\t\t[   ----  5. Exit!          ----   ]\n";
		cout << "\n\t\t\t\t\tEnter your choice: ";
		cin >> choice;
		system("cls");
		Products* product;
		switch (choice)
		{
		case '1':
			product = new TiVi;
			cout << "\nEnter the information of tivi \n";
			product->InputProduct();
			ListProduct.push_back(product);
			break;
		case '2':
			product = new Phones;
			cout << "\nEnter the information of phone \n";
			product->InputProduct();
			ListProduct.push_back(product);
			break;
		case '3':
			product = new Laptop;
			cout << "\nEnter the information of laptop \n";
			product->InputProduct();
			ListProduct.push_back(product);
			break;
		case '4':
			product = new Fridge;
			cout << "\nEnter the information of fridge \n";
			product->InputProduct();
			ListProduct.push_back(product);
			break;
		case '5':
			break;
		default:
			cout << "\nYour choice is ERROR! please choice again! \n";
			break;
		}
	} while (choice != '5');
}
void ElectroniceStore::OutputEmployee() {
	CalcuteSalary();
	cout << "\nName store: " << NameStore;
	cout << "\nList of employees \n";
	n = ListEmployee.size();
	for (int i = 0; i < n; i++)
	{
		cout << "\nThe information of employee " << i + 1;
		ListEmployee[i]->OutputEmployee();
		cout << "\n";
	}
	cout << "\nSum all salary of employee: " << CalcuteSalary();
}
double ElectroniceStore::CalcuteSalary() {
	double sume = 0;
	n = ListEmployee.size();
	for (int i = 0; i < n; i++)
	{
		sume = sume + ListEmployee[i]->CalculateSalary();
	}
	return sume;
}
void ElectroniceStore::OutputProduct() {
	cout << "\nName store: " << NameStore;
	cout << "\nList of products\n";
	n = ListProduct.size();
	for (int i = 0; i < n; i++)
	{
		cout << "\nThe information of product " << i + 1;
		ListProduct[i]->OutputProduct();
		cout << "\n";
	}
	cout << "\nSum all price the product: " << CalculateProduct();
}
double ElectroniceStore::CalculateProduct() {
	double sum = 0;
	int n = ListProduct.size();
	for (int i = 0; i < n; i++)
	{
		sum = sum + ListProduct[i]->CalculateProduct();
	}
	return sum;
}
void ElectroniceStore::Display() {
	if (n > 0 || m > 0) {
		n = ListProduct.size();
		for (int i = 0; i < n; i++)
		{
			cout << "\nThe information of product " << i + 1;
			ListProduct[i]->OutputProduct();
			cout << "\n";
		}
		cout << "\nPrice of all product: \n" << CalculateProduct();
		m = ListEmployee.size();
		for (int i = 0; i < m; i++)
		{
			cout << "\nThe information of employee " << i + 1;
			ListEmployee[i]->OutputEmployee();
			cout << "\n";
		}
		cout << "\nSalary all employee: \n" << CalcuteSalary();
	}
	else {
		cout << "\nThe list of employee and product is empty. You must first add a employee and product to the list !!!";
	}
}
void ElectroniceStore::SearchNameProduct() {
	string next;
	getline(cin, next);
	string NameSearch;
	cout << "\nEnter the name prodcut you want to find: ";
	getline(cin, NameSearch);
	int n = ListProduct.size();
	for (int i = 0; i < n; i++)
	{
		string a = ListProduct[i]->GetNameProduct();
		if ( stricmp(a.c_str(), NameSearch.c_str()) == 0) {
			cout << "\nProduct " << i + 1;
			ListProduct[i]->OutputProduct();
		}
		else {
		     //nothing
		}
	}
}
void ElectroniceStore::SearchNameEmployee() {
	string next;
	getline(cin, next);
	string NameSearch;
	cout << "\nEnter the name of employee you want to search: ";
	getline(cin, NameSearch);
	int n = ListEmployee.size();
	for (int i = 0; i < n; i++)
	{
		string a = ListEmployee[i]->GetNameEmployee();
		if (stricmp(a.c_str(),NameSearch.c_str()) == 0) {
			cout << "\nEmployee " << i + 1;
			ListEmployee[i]->OutputEmployee();
		}
		else {
			//nothing
		}
	}
}
void ElectroniceStore::RemoveProduct() {
	int position;
	cout << "\nEnter the index you want to remove in list product: ";
	cin >> position;
	n = ListProduct.size();
	if (position >= n) {
		cout << "\nIndex is ERROR! You need add to more than one product ";
	}
	else {
		ListProduct.erase(ListProduct.begin() + position);
		Display();
	}
}
void ElectroniceStore::RemoveEmployee() {
	int position;
	cout << "\nEnter the index you want to remove in list employee: ";
	cin >> position;
	m = ListEmployee.size();
	if (position >= m) {
		cout << "\nIndex is ERROR! You need add to more than one product \n";
	}
	else {
		ListEmployee.erase(ListEmployee.begin() + position);
		Display();
	}
}
void ElectroniceStore::SortingPriceProduct() {
	int i, j;
	Products* sort; 
	n = ListProduct.size();
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (ListProduct[i]->CalculateProduct() > ListProduct[j + 1]->CalculateProduct()) {
				sort = ListProduct[j];
				ListProduct[j] = ListProduct[j + 1];
				ListProduct[j + 1] = sort;
			}
		}
	}
	Display();
}

ElectroniceStore::ElectroniceStore() {

}
ElectroniceStore::~ElectroniceStore() {

}