#include<iostream>
using namespace std; 

int MaxSubarraySum(int arr[], int n)
{
    int curr_sum= 0 ;
    int max_sum = arr[0];

    for(int i=0; i<n; i++)
    {

        max_sum = max(max_sum, curr_sum+=arr[i]);

        if(curr_sum<0)
            curr_sum = 0 ; 
    }
    
    return max_sum; 
}

int main()
{
    int n = 8; 
    int arr[n] = {5,-4,8,9,2,-3,9,2};

    int result = MaxSubarraySum(arr, n);
    

    cout << "Maximum Subarray Sum : " << result << endl;



    return 0;
}