#include "Fridge.h"
Fridge::Fridge() {

}
Fridge::Fridge(string id, string name, string color, string madein,
	string brand, string warranty, double capital,
	double profit, double power, double capacity) :
	Products(id, name, color, madein, brand, warranty, capital, profit) {
	PowerConsumption = power;
	Capacity = capacity;
}
Fridge::~Fridge() {

}
double Fridge::GetPower() {
	return this->PowerConsumption;
}
void Fridge::SetPower(double power) {
	this->PowerConsumption = power;
}
double Fridge::GetCapacity() {
	return this->Capacity;
}
void Fridge::SetCapacity(double capacity) {
	this->Capacity = capacity;
}
void Fridge::InputProduct() {
	Products::InputProduct();
	CalculateProduct();
	string next;
	getline(cin, next);
	cout << "\nEnter the power consumtion of fridge: ";
	cin >> PowerConsumption;
	cout << "\nEnter the capacity of fridge: ";
	cin >> Capacity;
}
void Fridge::OutputProduct() {
	Products::OutputProduct(); 
	cout << "\nPower: " << PowerConsumption;
	cout << "\nCapacity: " << Capacity;
	cout << "\nPrice of fridge: " << CalculateProduct() << " $ ";
}
double Fridge::CalculateProduct() {
	Price = CapitalProduct + Profit + Capacity * 0.18;
	return Price;
}