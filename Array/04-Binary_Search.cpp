#include<iostream>
using namespace std; 

int BinSearch(int arr[], int n , int target)
{
        // {1,2,3,4,5,6,7,8,9};   5
    int start = 0 ; 
    int end = n-1; 

    while(start<=end)
    {
       int mid = (start+end) / 2;

        if(arr[mid]==target)
            return mid;
        else if(arr[mid] > target)
            end = mid-1;
        else 
            start = mid+1; 
    }

    return -1;

}

int main()
{
    int n = 9;
    int arr[n] = {1,2,3,4,5,6,7,8,9};
    int target = 1;


    int result = BinSearch(arr, n , target);

    if(result!=-1)
        cout << "Target found on index "<<result <<  endl;
    else
        cout << "Target not found in array" << endl;

    return 0;
 }