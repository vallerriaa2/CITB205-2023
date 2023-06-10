#include "catalog.h"

Catalog::Catalog(std::istream &in)
{
    string name;
    double price;
    while (getline(in, name, ',') && in >> price)
    {
        products.push_back(new Product(name, price));
        getline(in, name); // get rid of trailing newline character
    }
}
Catalog::~Catalog()
{
    std::cerr << "~Catalog" << std::endl;
    for (auto p : products)
    {
        // b/c we are allocating products with new in the constructor, we have to delete (free) the allocated memory in the desctuctor
        delete p;
    }
}
const Product *Catalog::get(int id) const
{
    int idx = id - 1;
    if (idx < 0 || idx >= products.size())
    {
        return NULL;
    }
    return products[idx];
};