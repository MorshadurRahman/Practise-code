#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int item;

    cout << "Enter number to search: ";
    cin >> item;

    int low = 0;
    int high = 5;
    int mid;
    bool found = false;

    while (low <= high)
     {
        mid = (low + high) / 2;

        if (arr[mid] == item)
         {
            cout << "Found at index " << mid << endl;
            found = true;
            break;
         }
        else if (item < arr[mid])
          {
            high = mid - 1;
          }
        else
        {
            low = mid + 1;
        }
     }

    if (!found)
        cout << "Not found!" << endl;

    return 0;
}
