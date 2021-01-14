#pragma once
#include"Products.h"
class Phones : public Products
{
private: 
	int MemoryPhone = 0;
	int RamPhone = 0;
	double SizeCreen = 0;
public:
	Phones();
	~Phones();
	Phones(string id, string name, string color, string madein,
		string brand, string warranty, double capital, double profit, int memory = 0, int ram = 0, double size = 0);
	void InputProduct();
	void OutputProduct();
	int GetMemory();
	void SetMemory(int memory);
	double CalculateProduct();
	int GetRamPhone();
	void SetRamPhone(int ram);
	double GetScreenPhone();
	void SetScreenPhone(double size);
};

