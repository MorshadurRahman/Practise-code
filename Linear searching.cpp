#include <iostream>
using namespace std;

int main() {
    int i, n, item;
    bool found = false;
    int arr[6] = {4, 6, 23, 53, 11, 43};

    cout << "Item you want to search: ";
    cin >> item;

    for (i = 0; i < 6; i++) {
        if (arr[i] == item) {
            found = true;
            cout << "Element found at index: " << i << endl;
            break;
        }
    }

    if (!found)
        cout << "Element not found" << endl;

    return 0;
}
