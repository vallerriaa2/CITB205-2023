#ifndef LAB1_CATALOG_H
#define LAB1_CATALOG_H

#include <iostream>
#include <fstream>
#include <vector>
#include "product.h"

class Catalog
{
public:
    Catalog(std::istream &in);
    Catalog(const Catalog &o) = delete; // we don't want to make copies of the catalog b/c catalog is supposed to contain hundreds of products
    ~Catalog();
    const Product *get(int id) const;
    Catalog &operator=(const Catalog &o) = delete; // we cannot have one catalog be assigned to another catalog

private:
    std::vector<Product *> products;
};

#endif // LAB1_CATALOG_H