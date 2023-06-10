#include <iostream>
#include "item.h"

Item::Item() : quantity(0), product(NULL)
{
    std::cerr << "Item()" << std::endl;
}

Item::Item(const Product *product, int quantity) : quantity(quantity)
{
    std::cerr << this << " Item(p)" << std::endl;
    // make a copy of the underlying product
    // if the catalog where the product is coming from is destroyed (and its memory free)
    // we don't want to keep a pointer to its products
    this->product = new Product(*product);
}

// Here we leverage the initialization syntax to re-use other constructor
Item::Item(const Item &other) : Item(other.product, other.quantity)
{
    std::cerr << this << " Item(copy)" << std::endl;
}

Item &Item::operator=(const Item &other)
{
    std::cerr << this << " Item::operator= " << std::endl;
    // assigning is also making a copy
    // otherwise will have 2 items pointing to the same product
    // and if one item is destroyed (deleted) it will also free the product memory
    // leaving the other item with a dangling pointer
    this->product = new Product(*other.product);
    this->quantity = other.quantity;
    return *this;
}

Item::~Item()
{
    std::cerr << this << " ~Item()" << std::endl;
    delete product; // when you call new in the constructor you should call delete in the destructor
}

const Product *Item::getProduct() const
{
    return product;
}

int Item::getQuantity() const
{
    return quantity;
}

double Item::total() const
{
    return quantity * product->getPrice();
}

void Item::add(int qty)
{
    quantity += qty;
}
