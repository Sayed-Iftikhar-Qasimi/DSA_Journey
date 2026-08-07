#include<iostream>
#include<algorithm>
using namespace std; 


void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << "  ";
    }
}

int main()
{
    int arr[8] = {1,4,1,3,2,4,3,7};


//  Ascending Order Sorting

    cout << "\nAscending Order Sorting..." << endl;
    sort(arr, arr+8);

    print(arr, 8);

// Descending Order Sorting

    cout << "\n\nDescending Order Sorting..." << endl;
    sort(arr, arr+8,greater<int>());

    print(arr, 8);
    return 0;
}