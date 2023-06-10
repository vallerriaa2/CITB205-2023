#include "Warehouse.h"
#include <iostream>
void Warehouse::add(string name, int qty)
{
	Product newProduct(name, qty);
	products.push_back(newProduct);
}
void Warehouse::remove(string name)
{
	for (auto i = products.begin(); i != products.end(); ++i) {
		if (i->getName() == name) {
			products.erase(i);
			cout << "Product '" << name << "' removed from the inventory." << endl;
			return;
		}
	}
	cout << "Product '" << name << "' not found in the inventory." << endl;
}
void Warehouse::uptadeQty(string& name, int qty)
{
	for (auto& product : products)
	{
		if (product.getName() == name)
		{
			product.setQty(qty);
			cout << "Quantity updated for product: " << name << endl;
			return;
		}
	}
	cout << "Product " << name << " not found!" << endl;
}
Product* Warehouse::search(string name)
{
	for (auto& product : products)
	{
		if (product.getName() == name)
		{
			return &product;
		}
	}
	return nullptr;
}
void Warehouse::inventoryReport()
{
	cout << endl;
	cout << "--------------------------" << endl;
	cout << "   Warehouse inventory: " << endl;
	for (auto& product : products)
	{
		cout << "Product: " << product.getName() << " Quantity: " << product.getQty() << endl;
	}
	cout << "--------------------------" << endl;
}
