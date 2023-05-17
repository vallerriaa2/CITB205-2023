#include "Storage.h"
#include <iostream>
Storage::Storage(){}
void Storage::add(Product product, string name, int quantity)
{
	products.push_back(Product(name, quantity));
}
void Storage::printList(std::ostream out)
{
	for(auto & product : products)
	{
		out << product << std::endl;
	}
}


