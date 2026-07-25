#include<iostream>
using namespace std; 

int LinSearch(int arr[], int n , int target)
{

    for(int i=0; i<n; i++)
    {
        if(arr[i] == target)
            return i;
    }

    return -1;
}


int main()
{

    int n = 6; 
    int arr[n] = {5,19,23,9,10,45};
    int target = 10;

    int result = LinSearch(arr, n , target);


    if(result!=-1)
        cout << "The Target found on index " << result << endl;
    else
        cout << "Target not found in arra" << endl;




    return 0;
}