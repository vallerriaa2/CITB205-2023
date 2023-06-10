#include <iostream>
#include "product.h"

Product::Product(const string &name, double price) : name(name), price(price)
{
    std::cerr << "Product()" << std::endl;
}

const string &Product::getName() const
{
    return name;
}

double Product::getPrice() const
{
    return price;
}
