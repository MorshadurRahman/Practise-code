#include<iostream>
using namespace std;

int main()
{
    int arr[] ={10, 5, 8, 6, 3, 9, 13, 17, 2, 50};
    int i, j, temp;
    int n =10;
    for(i =0; i<n-1;i++)
    {
        for(j =0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp =arr[j];
                arr[j] =arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Sorted array: ";
    return 0;
}
