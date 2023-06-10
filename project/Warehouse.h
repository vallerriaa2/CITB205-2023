#pragma once
#include "Product.h"
#include <vector>
class Warehouse
{
private:
	vector<Product> products;
public:
	void add(string name, int qty);
	void remove(string name);
	void uptadeQty(string& name, int qty);
	Product* search(string name);
	void inventoryReport();

};
