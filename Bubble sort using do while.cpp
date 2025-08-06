#include <iostream>
using namespace std;

int main() {
    int arr[100], n,j, i, temp;
    bool swapped;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //Copied from chatgpt
    //Bubble sort using do while
    do {
        swapped = false; //hold swap
        for (i = 0; i < n - 1; i++)
            {
               for(j = 0; j < n - i - 1; j++)
               {
                    if (arr[i] > arr[i + 1])
                    {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    swapped = true; //release swap
                    }
               }
            }
        }
        while (swapped);

    //Sorted elements
    cout << "Sorted array:\n";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
