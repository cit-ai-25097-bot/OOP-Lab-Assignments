#include <iostream>
using namespace std;

// Creates a new array with twice the original size.
// The first half contains the original values; the second half contains
// twice each corresponding original value.
int* resizeArray(int inArray[], const int size) {
    int* resizedArray = new int[size * 2];

    for (int i = 0; i < size; ++i) {
        resizedArray[i] = inArray[i];
        resizedArray[i + size] = inArray[i] * 2;
    }

    return resizedArray;
}

int main() {
    int size;

    cout << "Enter size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Array size must be greater than zero.\n";
        return 1;
    }

    int* originalArray = new int[size];

    cout << "Enter " << size << " elements of array: ";
    for (int i = 0; i < size; ++i) {
        cin >> originalArray[i];
    }

    int* resizedArray = resizeArray(originalArray, size);

    cout << "Resized array: ";
    for (int i = 0; i < size * 2; ++i) {
        cout << resizedArray[i];
        if (i < size * 2 - 1) cout << ", ";
    }
    cout << '\n';

    delete[] originalArray;
    delete[] resizedArray;

    return 0;
}