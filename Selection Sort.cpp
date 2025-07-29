#include <iostream>
using namespace std;

int main() {
    int i, j, n, temp, min_id;
    int arr[10] = {347, 213, 534, 23, 13, 45, 24, 564, 575, 277};
    n = 10;
    for (i = 0; i < n - 1; ++i) {
        min_id = i;

        for (j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_id]) {
                min_id = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_id];
        arr[min_id] = temp;
    }
    cout << "Sorted array: ";
    for (i = 0; i < n; ++i) {
        cout << arr[i] << "  ";
    }

    cout << endl;
    return 0;
}

