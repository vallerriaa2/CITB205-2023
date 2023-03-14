#ifndef LAB1_ITEM_H
#define LAB1_ITEM_H


#include "product.h"

class Item {
public:
    double total();
private:
    Product product;
    int qty;
};


#endif //LAB1_ITEM_H
