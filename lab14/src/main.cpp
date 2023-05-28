#include <iostream>
#include <fstream>
#include "invoice.h"
#include "textprinter.h"
#include "catalog.h"

using std::cin;

int main()
{
    std::ifstream fin("catalog.in");
    Catalog catalog(fin);
    Invoice invoice;
    FixedDiscount *fixed = new FixedDiscount(5.0);
    PercentageDiscount *off10 = new PercentageDiscount(0.1);
    TextPrinter printer;

    string cmd;
    int id;
    int qty;
    string discount;
    while (cin >> cmd)
    {
        if (cmd == "add" && cin >> id >> qty)
        {
            auto product = catalog.get(id);
            if (!product)
            {
                std::cout << "ERROR: product not found" << std::endl;
                continue;
            }
            invoice.add(product, qty);
        }
        else if (cmd == "remove" && cin >> id)
        {
            auto product = catalog.get(id);
            if (!product)
            {
                std::cout << "ERROR: product not found" << std::endl;
                continue;
            }
            invoice.remove(product);
        }
        else if (cmd == "discount" && cin >> discount)
        {
            if (discount == "fixed")
            {
                invoice.add(fixed);
            }
            else if (discount == "off10")
            {
                invoice.add(off10);
            }
            else
            {
                std::cout << "ERROR: invalid discount" << std::endl;
                continue;
            }
        }
        else if (cmd == "print")
        {
            printer.print(std::cout, invoice);
        }
        else
        {
            std::cout << "ERROR: bad command" << std::endl;
            return 1;
        }
    }

    return 0;
}
