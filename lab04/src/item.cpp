#include "item.h"


double Item::total() {
    return product.getPrice() * qty;
}