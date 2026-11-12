#include <iostream>
#include <cstring>
using namespace std;

// Returns a dynamically allocated copy of the first 'count' characters.
char* left(const char* target, const int count) {
    char* result = new char[count + 1];

    for (int i = 0; i < count; ++i) {
        result[i] = target[i];
    }
    result[count] = '\0';

    return result;
}

// Releases memory allocated for a character array.
void Destructor(char* p) {
    delete[] p;
}

int main() {
    char target[30];
    int count;

    cout << "Enter a string (maximum 29 characters): ";
    cin.getline(target, 30);

    int stringLength = static_cast<int>(strlen(target));

    cout << "Enter count: ";
    cin >> count;

    if (count < 0 || count > stringLength) {
        cout << "Error: count must be between 0 and "
             << stringLength << ".\n";
        return 1;
    }

    char* substring = left(target, count);
    cout << "Left substring: " << substring << '\n';

    Destructor(substring);

    return 0;
}