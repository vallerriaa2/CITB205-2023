#include "discount.h"

FixedDiscount::FixedDiscount(double amount) : amount(amount) {

}

double FixedDiscount::calc(vector<Item> items) {
    return amount;
}

PercentageDiscount::PercentageDiscount(double off) : off(off) {
    
}

double PercentageDiscount::calc(vector<Item> items) {
    double sum = 0;
    for (Item item : items) {
        sum += item.total();
    }
    return sum*off;
}