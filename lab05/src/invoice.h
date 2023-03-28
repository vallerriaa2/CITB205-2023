#ifndef LAB1_INVOICE_H
#define LAB1_INVOICE_H


#include <vector>
#include "product.h"
#include "item.h"
#include "discount.h"

using std::vector;

class Invoice {
public:
    void add(Product product, int qty);
    void add(Discount *discount);
    double subtotal();
    double discount();
    vector<Item> items;
    vector<Discount*> discounts;
};


#endif //LAB1_INVOICE_H
