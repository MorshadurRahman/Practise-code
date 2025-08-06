#include <iostream>
using namespace std;

int main() {
    int i, j, n, temp, min_id;
    int arr[100];

    //Number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // unsorted elements
    cout << "Enter " << n << " elements:" << endl;
    for (i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    //Selection sort
    for (i = 0; i < n - 1; ++i) {
        min_id = i;

        for (j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_id]) {
                min_id = j;
            }
        }

        //Swap
        temp = arr[i];
        arr[i] = arr[min_id];
        arr[min_id] = temp;
    }

    //sorted array
    cout << "Sorted array: ";
    for (i = 0; i < n; ++i) {
        cout << arr[i] << "  ";
    }

    cout << endl;
    return 0;
}


