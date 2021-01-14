#pragma once
#include"Products.h"
class Fridge : public Products
{
private: 
	double PowerConsumption = 0;
	double Capacity = 0;
public :
	Fridge();
	~Fridge();
	Fridge(string id, string name, string color, string madein,
		string brand, string warranty, double capital,
		double profit, double power = 0, double capacity = 0);
	void InputProduct();
	void OutputProduct();
	double CalculateProduct();
	double GetPower();
	void SetPower(double power);
	double GetCapacity();
	void SetCapacity(double capacity);
};
