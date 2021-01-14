#pragma once
#include"Products.h"

class Laptop : public Products
{
private: 
	int Ram = 0;
	int Rom = 0;
	string ChipLaptop;
	string PinLaptop;
public:
	Laptop();
	~Laptop();
	Laptop(string id, string name, string color, string madein,
		string brand, string warranty, double capital, double profit, 
		string chip , string pin, int ram = 0, int rom = 0);
	void InputProduct();
	void OutputProduct();
	double CalculateProduct();
	int GetRom();
	void SetRom(int rom);
	int GetRam();
	void SetRam(int ram);
	string GetChipLaptop();
	void SetChipLaptop(string chip);
	string GetPinLaptop();
	void SetPinLaptop(string pin);
};

