LAB-01 – Task 03: Left Substring

Description

The program reads a string into a character array of size 30. It then asks for a character count and displays that many characters from the left side of the string.


The program checks that the requested count is not negative and does not exceed the string length.


Required functions


char* left(const char* target, const int count); dynamically creates and returns the substring.

void Destructor(char* p); releases the dynamically allocated character array.


Example

Input


Enter a string (maximum 29 characters): Equal matrices have equal dimensions
Enter count: 5

Output


Left substring: Equal

Compile and run

g++ main.cpp -o left_substring
./left_substring
