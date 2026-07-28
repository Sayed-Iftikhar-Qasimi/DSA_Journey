#include<iostream>
using namespace std; 

int MaxSubarraySum(int arr[], int n)
{
    int maxSubarraySum = arr[0];


    for(int start=0; start<n; start++)
    {
        int sum = 0 ; 
        for(int end=start; end<n; end++)
        {
            sum += arr[end];
            if(maxSubarraySum<sum)
                maxSubarraySum = sum;
        }}

    return maxSubarraySum;
}

int main()
{
    int n = 5; 
    int arr[n] = {-8,-2,-4,-9,-5};

    int result = MaxSubarraySum(arr, n);

    cout << "Maximum Subarray Sum: " << result << endl;


    return 0; 
}