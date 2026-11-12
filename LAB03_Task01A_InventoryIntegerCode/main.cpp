#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct InventoryItem {
    int itemCode;
    string itemName;
    double cost;
    double sellingPrice;
};

InventoryItem insertItem() {
    InventoryItem item;

    cout << "Enter item name: ";
    getline(cin >> ws, item.itemName);

    cout << "Enter item cost: ";
    cin >> item.cost;

    while (item.cost < 0) {
        cout << "Cost cannot be negative. Enter item cost again: ";
        cin >> item.cost;
    }

    item.itemCode = 3123 + rand() % 8000;
    item.sellingPrice = item.cost * 1.40;

    return item;
}

void displayStock(const InventoryItem* items, const int count) {
    cout << "\n---------------- Inventory Stock ----------------\n";
    cout << left << setw(12) << "Item Code"
         << setw(25) << "Item Name"
         << right << setw(12) << "Cost"
         << setw(16) << "Selling Price" << '\n';

    for (int i = 0; i < count; ++i) {
        cout << left << setw(12) << items[i].itemCode
             << setw(25) << items[i].itemName
             << right << setw(12) << fixed << setprecision(2) << items[i].cost
             << setw(16) << items[i].sellingPrice << '\n';
    }
}

int main() {
    const int ITEM_COUNT = 10;
    InventoryItem inventory[ITEM_COUNT];

    srand(static_cast<unsigned int>(time(nullptr)));

    cout << "Enter details for " << ITEM_COUNT << " inventory items.\n";
    for (int i = 0; i < ITEM_COUNT; ++i) {
        cout << "\nItem " << i + 1 << ":\n";
        inventory[i] = insertItem();
    }

    displayStock(inventory, ITEM_COUNT);
    return 0;
}