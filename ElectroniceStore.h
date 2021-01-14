#pragma once
#include"TiVi.h"
#include"Phones.h"
#include"Laptop.h"
#include"GuardingStaff.h"
#include"Accountant.h"
#include"TechnicalStaff.h"
#include"ManagerStore.h"
#include "SalesAssistant.h"
#include"Fridge.h"
#include<vector>
class ElectroniceStore
{
private:
	vector<Employee*> ListEmployee;
	vector<Products*> ListProduct;
	string NameStore;
	int m = 0;
	int n = 0;
public:
	ElectroniceStore();
	~ElectroniceStore();
	void InputEmployee();
	void OutputEmployee();
	double CalcuteSalary();
	void InputProduct();
	void OutputProduct();
	double CalculateProduct();
	string GetNameStore();
	void SetNametStore(string namestore);
	void Display();
	void SearchNameProduct();
	void SearchNameEmployee();
	void RemoveProduct();
	void RemoveEmployee();
	void SaveInFile();
	void SortingPriceProduct();
};
