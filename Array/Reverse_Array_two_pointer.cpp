#include<iostream>
using namespace std; 

void reverseArrayInPlace(int arr[], int n){
    for(int i=0; i<n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 6; 
    int arr[n] = {1,2,3,4,5,6};

    reverseArrayInPlace(arr,n);

    return 0;
}