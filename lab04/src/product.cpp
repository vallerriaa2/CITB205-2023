#include "product.h"

Product::Product(string name, double price) {
    this->name = name;
    if (price < 0) {
        price = 0;
    }
    this->price = price;
}

double Product::getPrice() {
    return price;
}