#include "Phones.h"
Phones::Phones(string id, string name, string color, string madein,
	string brand, string warranty, double capital, double profit, int memory, int ram, double size) :
	Products(id, name, madein, color, brand, warranty, capital, profit) {
	MemoryPhone = memory;
	RamPhone = ram;
	SizeCreen = size;
}
int Phones::GetMemory() {
	return this->MemoryPhone;
}
void Phones::SetMemory(int memory) {
	this->MemoryPhone = memory;
}
int Phones::GetRamPhone() {
	return this->RamPhone;
}
void Phones::SetRamPhone(int ram) {
	this->RamPhone = ram;
}
double Phones::GetScreenPhone() {
	return this->SizeCreen;
}
void Phones::SetScreenPhone(double size) {
	SizeCreen = size;
}
void Phones::InputProduct() {
	CalculateProduct();
	Products::InputProduct();
	string next;
	getline(cin, next);
	cout << "\nEnter the menory of the phone: ";
	cin >> MemoryPhone;
	cout << "\nEnter the ram of the phone: ";
	cin >> RamPhone;
	cout << "\nEnter size of screen of the phone: ";
	cin >> SizeCreen;
	
}
void Phones::OutputProduct() {
	Products::OutputProduct();
	cout << "\nMemory: " << MemoryPhone;
	cout << "\nRam: " << RamPhone;
	cout << "\nSize: " << SizeCreen;
	cout << "\nPrice of phones: " << CalculateProduct() << " $ ";
	cout << "\n";
}
double Phones::CalculateProduct() {
	Price = CapitalProduct + Profit + 0.1 * RamPhone;
	return Price;
}
Phones::Phones() {

}
Phones::~Phones() {

}