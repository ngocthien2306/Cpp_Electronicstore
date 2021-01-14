#include "Products.h"
Products::Products() {

}
Products::~Products() {

}
Products::Products(string id, string name, string color, string madein,
	string brand, string warranty, double capital, double profit) {
	IDProduct = id;
	NameProduct = name;
	ColorProduct = color;
	MadeIn = madein;
	BrandProduct = brand;
	WarrantyPeriod = warranty;
	CapitalProduct = capital;
	Profit = profit;
}
string Products::GetIDProducts() {
	return this->IDProduct;
}
void Products::SetIDProducts(string id) {
	this->IDProduct = id;
}
string Products::GetNameProduct() {
	return this->NameProduct;
}
void Products::SetNameProduct(string name) {
	this->NameProduct = name;
}
string Products::GetColorProduct() {
	return this->ColorProduct;
}
void Products::SetColorProduct(string color) {
	this->ColorProduct = color;
}
string Products::GetMadeinProduct() {
	return this->MadeIn;
}
void Products::SetMadeinProduct(string madein) {
	this->MadeIn = madein;
}
string Products::GetWarrantyProduct() {
	return this->WarrantyPeriod;
}
void Products::SetWarrantyProduct(string warranty) {
	this->WarrantyPeriod = warranty;
}
string Products::GetBrandProduct() {
	return this->BrandProduct;
}
void Products::SetBrandProduct(string brand) {
	this->BrandProduct = brand;
}
double Products::GetCapitalProduct() {
	return this->CapitalProduct;
}
void Products::SetCapitalProduct(double capital) {
	this->CapitalProduct = capital;
}
double Products::GetProfit() {
	return this->Profit;
}
void Products::SetProfit(double profit) {
	this->Profit = profit;
}
double Products::GetPrice() {
	return this->Price;
}
void Products::SetPrice(double price) {
	this->Price = price;
}
void Products::InputProduct() {
	CalculateProduct();
	string check;
	getline(cin, check);
	cout << "\nEnter name product: ";
	getline(cin, NameProduct);
	cout << "\nEnter ID of the product: ";
	getline(cin, IDProduct);
	cout << "\nEnter color: ";
	getline(cin, ColorProduct);
	cout << "\nEnter place productivity: ";
	getline(cin, MadeIn);
	cout << "\nEnter brand: ";
	getline(cin, BrandProduct);
	cout << "\nEnter the warranty period (y-mm): ";
	getline(cin, WarrantyPeriod);
	cout << "\nCapital of product: ";
	cin >> CapitalProduct;
	cout << "\nProfit of item: ";
	cin >> Profit;
} 
void Products::OutputProduct() {	
	cout << "\nName: " << NameProduct;
	cout << "\nID: " << IDProduct;
	cout << "\nColor: " << ColorProduct;
	cout << "\nMAde in: " << MadeIn;
	cout << "\nBrand: " << BrandProduct;
	cout << "\nCapital: " << CapitalProduct;
	cout << "\nProfit: " << Profit;
	cout << "\nWarranty: " << WarrantyPeriod;

}
double Products::CalculateProduct() {
	Price = this->CapitalProduct + this->Profit;
	return Price;
}