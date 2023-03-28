#include "invoice.h"

void Invoice::add(Product product, int qty) {
    items.push_back(Item(product, qty));
}

double Invoice::subtotal() {
    double s = 0;
    for (auto item : items) {
        s += item.total();
    }
    return s;
}

void Invoice::add(Discount *discount) {
    discounts.push_back(discount);
}

double Invoice::discount() {
    double sum = 0;
    for (Discount *d : discounts) {
        sum += d->calc(items);
    }
    return sum;
}