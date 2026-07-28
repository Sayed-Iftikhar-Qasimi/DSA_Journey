#include<iostream>
using namespace std;

int MaxSubarraySum(int arr[], int n){
    int maxSubarraySum = arr[0];

    for(int start=0; start<n; start++)
    {
        for(int end=start; end<n; end++)
        {   
            int subArraySum = 0 ; 
            for(int i=start; i<=end; i++){
              subArraySum += arr[i];
            }

            if(maxSubarraySum < subArraySum)
                maxSubarraySum = subArraySum; }
        cout << endl;
    }
    return maxSubarraySum;
}


int main()
{
    int n = 5; 
    int arr[n] = {1,2,3,4,5};
    int result = MaxSubarraySum(arr, n );
    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
} 