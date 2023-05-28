#ifndef LAB1_DISCOUNT_H
#define LAB1_DISCOUNT_H

#include <vector>
#include "item.h"

using std::vector;

class Discount
{
public:
    virtual double calc(vector<Item> items) = 0;
};

class FixedDiscount : public Discount
{
public:
    FixedDiscount(double amount);
    double calc(vector<Item> items);

private:
    double amount;
};
class PercentageDiscount : public Discount
{
public:
    PercentageDiscount(double off);
    double calc(vector<Item> items);

private:
    double off;
};

#endif // LAB1_DISCOUNT_H