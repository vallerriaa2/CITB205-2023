#ifndef LAB1_INVOICE_H
#define LAB1_INVOICE_H

#include <vector>
#include "product.h"
#include "item.h"
#include "discount.h"

using std::vector;

class Invoice
{
public:
    void add(const Product *product, int qty);

    void remove(const Product *product);

    int count() const;

    const Product *productAt(int idx) const;

    int quantityAt(int idx) const;

    double totalAt(int idx) const;

    double subtotal() const;

    double taxes() const;

    double total() const;

    void add(Discount *discount);
    double discount() const;

private:
    vector<Discount *> discounts;
    vector<Item> items;
};

#endif // LAB1_INVOICE_H
