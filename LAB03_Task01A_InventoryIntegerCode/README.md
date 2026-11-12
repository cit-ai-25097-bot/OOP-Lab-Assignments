LAB-03 – Task 01A: Inventory with Integer Item Codes

Description

This program stores 10 inventory items in an array of InventoryItem structures. For every item, the user enters its name and cost. The program generates an integer item code and calculates the selling price using a 40% profit on cost.


Structure and functions


InventoryItem: item code, item name, cost, and selling price.

InventoryItem insertItem(): reads one item and calculates its selling price.

void displayStock(const InventoryItem*, const int): displays all items in a table.


Compile and run

g++ main.cpp -o inventory_integer
./inventory_integer
