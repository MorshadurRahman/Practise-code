#include<iostream>
using namespace std;

int main()
{
    int arr[10]; //Array
    int i, j, temp, n; //Declaration

    //Number of elements i want to sort
    cout << "Enter number of elements: ";
    cin >> n;

    //Enter unsorted number of elements
    cout << "Enter " << n << " elements:" << endl;
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                //Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    //Sorted output
    cout << "Sorted array: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

