LAB-03 – Task 01B: Inventory with String Item Codes

Description

This is the modified inventory program. The item code is a string made from the first three characters of the item name in uppercase, followed by an underscore and a running integer. The selling price includes a 40% profit on cost.


Example format:



Computer → COM_31203

Hard disk → HAR_31204


Functions


generateItemCode – creates the required string code.

insertItem – reads item details and calculates the selling price.

displayStock – prints the inventory in a readable table.


The program stores 10 items, as required by the lab.


Compile and run

g++ main.cpp -o inventory_string
./inventory_string
