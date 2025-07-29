#include <bits/stdc++.h>
using namespace std;

int main()
{
    int low = 0, high = 6;
    int arr[7] = {5, 10, 15, 20, 25, 30, 35};
    int item;

    cout << "Which item do you want? ";
    cin >> item;

    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == item)
        {
            cout << "Item found at index: " << mid << endl;
            break;
        }
        else if (arr[mid] > item)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (low > high)
        cout << "Item not found!" << endl;

    return 0;
}

