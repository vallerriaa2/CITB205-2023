#include <iostream>
#include "Warehouse.h"
using namespace std;
int main()
{
	Warehouse storage;

	int choice;
	string productName;
	int qty;

	while (true)
	{
		cout << "-----Warehouse management menu-----" << endl;
		cout << "1. Add a product" << endl;
		cout << "2. Remove a product" << endl;
		cout << "3. Update product quantity" << endl;
		cout << "4. Search for a product" << endl;
		cout << "5. Print out inventory" << endl;
		cout << "0. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter prouct name: ";
			cin >> productName;
			cout << "Enter quantity: ";
			cin >> qty;
			storage.add(productName, qty);
			break;
		case 2:
			cout << "Enter product name to remove: ";
			cin >> productName;
			storage.remove(productName);
			break;
		case 3:
			cout << "Enter product name to update quantity: ";
			cin >> productName;
			cout << "Enter new quantity: ";
			cin >> qty;
			storage.uptadeQty(productName, qty);
			break;
		case 4:
			cout << "Enter product name to search: ";
			cin >> productName;
			{
				Product* product = storage.search(productName);
				if (product)
				{
					cout << "Product found: " << product->getName() << ", Quantity: " << product->getQty() << endl;
				}
				else
				{
					cout << "Product not found in the warehouse!";
				}
			}
			break;
		case 5:
			storage.inventoryReport();
			break;
		case 0:
			cout << "Exiting the program..." << endl;
			return 0;
		default:
			cout << "Invalid choice. Please try again." << endl;
			
		}
		cout << endl;
	}

}