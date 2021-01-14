#include "Laptop.h"
Laptop::Laptop() {

}
Laptop::Laptop(string id, string name, string color, string madein,
	string brand, string warranty, double capital, double profit,
	string chip, string pin, int ram, int rom)
	: Products( id, name, color, madein, brand, warranty, capital, profit)
{
	Ram = ram;
	Rom = rom;
	ChipLaptop = chip;
	PinLaptop = pin;
}
Laptop::~Laptop() {

}
int Laptop::GetRam() {
	return this->Ram;
}
void Laptop::SetRam(int ram) {
	this->Ram = ram;
}
int Laptop::GetRom() {
	return this->Rom;
}
void Laptop::SetRom(int rom) {
	this->Rom = rom;
}
string Laptop::GetChipLaptop() {
	return this->ChipLaptop;
}
void Laptop::SetChipLaptop(string chip) {
	this->ChipLaptop = chip;
}
string Laptop::GetPinLaptop() {
	return this->PinLaptop;
}
void Laptop::SetPinLaptop(string pin) {
	this->PinLaptop = pin;
}
void Laptop::InputProduct() {
	CalculateProduct();
	Products::InputProduct();
	cout << "\nChip of laplop: ";
	getline(cin, ChipLaptop);
	cout << "\nType of pin: ";
	getline(cin, PinLaptop);
	cout << "\nEnter Ram of laptop: ";
	cin >> Ram;
	cout << "\nEnter Rom of laptop: ";
	cin >> Rom;
}
void Laptop::OutputProduct() {
	Products::OutputProduct();
	cout << "\nRam: " << Ram;
	cout << "\nRom: " << Rom;
	cout << "\nChip: " << ChipLaptop;
	cout << "\nPin: " << PinLaptop;
	cout << "\nPrice of laptop: " << CalculateProduct() << " $ ";
	cout << "\n";
}
double Laptop::CalculateProduct() {
	Price = CapitalProduct + Profit + Ram * 0.1;
	return Price;
}