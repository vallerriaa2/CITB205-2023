#include <iostream>
#include"Product.h"
#include "Storage.h"
int main()
{
	Product product;
	Storage warehouse;

	warehouse.add(product, "apple", 3);
	
	
	return 0;
}