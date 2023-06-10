#ifndef LAB1_ITEM_H
#define LAB1_ITEM_H

#include "product.h"

class Item
{
public:
    Item();
    Item(const Product *product, int quantity);
    Item(const Item &i); // we allow copying of items
    ~Item();

    const Product *getProduct() const;

    int getQuantity() const;

    double total() const;

    void add(int qty);

    Item &operator=(const Item &i); // we allow assigning one item to another

private:
    const Product *product;
    int quantity;
};

#endif // LAB1_ITEM_H
