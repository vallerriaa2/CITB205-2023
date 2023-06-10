#include "Product.h"

Product::Product(string name, int qty)
{
	this->name = name;
	this->qty = qty;
}
void Product::setQty(int qty)
{
	this->qty = qty;
}
string Product::getName()
{
	return name;
}
int Product::getQty()
{
	return qty;
}
