#include <iostream>
using namespace std;

int main()
{
    int low = 0, mid, high= 5, item; //Declaration
    int arr[6] = {10, 20, 30, 40, 50, 60};

    cout << "Enter number to search: ";
    cin >> item;

    bool found = false;

    while (low <= high)
     {
        mid = (low + high) / 2; //Calculation of mid

        //If found
        if (arr[mid] == item)
         {
            cout << "Found at index " << mid << endl;
            found = true;
            break; //To break the loop if found
         }
        //search right side of mid
        else if (item < arr[mid])
          {
            high = mid - 1;
          }
        //search left side of mid
        else
        {
            low = mid + 1;
        }
     }

    if (!found)
        cout << "Not found!" << endl;

    return 0;
}
