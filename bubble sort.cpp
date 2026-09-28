#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int temp;

    cout << "Enter 5 numbers:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "\nOriginal: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}