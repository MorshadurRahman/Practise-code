ijf#include<iostream>
using namespace std;
int main()
{
    int arr[ ] = {7,3,13,17,19,2,10};
    int i,j,key=0;
    int n = 7;
    for(i=1; i<n; i++)
    {
        j=i-1;
        key=arr[i];
        while(j>0 && arr[j]>key);
        {
            arr[j+1]= arr[j];
            j=j-1;
        }
    }

}

fjhjwhdaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
