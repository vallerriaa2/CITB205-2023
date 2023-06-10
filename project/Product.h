#pragma once
#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
	string name;
	int qty;

public:
	Product(string name, int qty);
	void setQty(int qty);
	string getName();
	int getQty();
};

