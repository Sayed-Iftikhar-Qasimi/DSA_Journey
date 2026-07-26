#include<iostream>
using namespace std; 

void reverseArrayExtraSpace(int arr[], int n)
{

    int coparr[n];
  

    for(int i=0; i<n; i++)
    {
        coparr[i] = arr[i];
    }

    for(int i=0; i<n; i++)
    {
            arr[i] = coparr[n-i-1];
    }







    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

}

int main()
{

    int n = 9 ; 

    int arr[n] = {1,2,3,4,5,6,7,8,9};
    
    reverseArrayExtraSpace(arr, n);



    return 0;
}