#include "invoice.h"

void Invoice::add(const Product *product, int qty)
{
    bool found = false;
    for (int i = 0; i < items.size(); i++)
    {
        if (items[i].getProduct()->getName() == product->getName())
        {
            found = true;
            items[i].add(qty);
            break;
        }
    }

    if (!found)
        items.push_back(Item(product, qty));
}

void Invoice::remove(const Product *product)
{
    bool found = false;
    for (auto it = items.begin(); it != items.end(); it++)
    {
        if (it->getProduct()->getName() == product->getName())
        {
            items.erase(it);
            return;
        }
    }
}

int Invoice::count() const
{
    return items.size();
}

const Product *Invoice::productAt(int idx) const
{
    return items[idx].getProduct();
}

int Invoice::quantityAt(int idx) const
{
    return items[idx].getQuantity();
}

double Invoice::totalAt(int idx) const
{
    return items[idx].total();
}

double Invoice::subtotal() const
{
    double sum = 0;
    for (int i = 0; i < items.size(); i++)
        sum += items[i].total();
    return sum;
}

double Invoice::discount() const
{
    double sum = 0;
    for (Discount *d : discounts)
    {
        sum += d->calc(items);
    }
    return sum;
}

void Invoice::add(Discount *discount)
{
    discounts.push_back(discount);
}

double Invoice::total() const
{
    return subtotal() + taxes() - discount();
}

double Invoice::taxes() const
{
    return 0.10 * (subtotal() - discount());
}