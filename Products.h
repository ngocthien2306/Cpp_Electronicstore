  #pragma once
#include<iostream>
#include<string>
using namespace std;
class Products
{
protected:
	string IDProduct;
	string NameProduct;
	string BrandProduct;
	string ColorProduct;
	string MadeIn;
	double CapitalProduct = 0;
	double Profit = 0;
	string WarrantyPeriod;
	//double AmountProduct;
	double Price = 0;
public:
	Products();
	~Products();
	Products(string id, string name, string color, string madein, 
	       string brand , string warranty, double capital = 0, double profit = 0);
	string GetIDProducts();
	void SetIDProducts(string id);
	string GetNameProduct();
	void SetNameProduct(string name);
	string GetColorProduct();
	void SetColorProduct(string color);
	string GetMadeinProduct();
	void SetMadeinProduct(string madein);
	string GetWarrantyProduct();
	void SetWarrantyProduct(string warranty);
	string GetBrandProduct();
	void SetBrandProduct(string brand);
	double GetCapitalProduct();
	void SetCapitalProduct(double capital);
	double GetProfit();
	void SetProfit(double profit);
	double GetPrice();
	void SetPrice(double price);
	virtual void InputProduct() = 0;
	virtual void OutputProduct() = 0;
	virtual double CalculateProduct() = 0;
};

