#pragma once
#include <vector>
#include "Product.h"
using namespace std;
class Storage
{
	vector<Product> products;

public:
	Storage();
	void add(Product product, string name, int quantity);
	void printList(std::ostream out);

};
