LAB-01 – Task 01: Dynamic Array Resizing

Description

This C++ program creates a dynamically allocated integer array using a size entered by the user. The resizeArray function returns a new array with twice the original capacity:



The first half contains the original elements.

The second half contains twice each original element.


Function

int* resizeArray(int inArray[], const int size);

Example

Input


Enter size of the array: 4
Enter 4 elements of array: 1 2 3 4

Output


Resized array: 1, 2, 3, 4, 2, 4, 6, 8

Compile and run

g++ main.cpp -o resize_array
./resize_array

The program releases both dynamically allocated arrays using delete[].

