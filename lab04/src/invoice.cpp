#include "invoice.h"

void Invoice::add(Product product, int qty) {
    // TODO: store the product and quantity wrapped in item in a vector
}

double Invoice::subtotal() {
    double s = 0;
    for (auto item : items) {
        s += item.total();
    }
    return s;
}