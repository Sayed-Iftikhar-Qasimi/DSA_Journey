#include<iostream>
using namespace std; 

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << "  ";
    }

}


void countSort(int arr[], int n)
{
    int minVal = INT_MAX; 
    int maxVal = INT_MIN;

    int freq[10000] = {0};


    for(int i=0; i<n; i++)
    {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        freq[arr[i]]++;
    }

    for(int i=minVal, j=0; i<=maxVal; i++)
    {
        while(freq[i]>0)
        {
            arr[j] = i;
            j++;
            freq[i]--;
        }
    }

    print(arr, n);


}

int main()
{

    int arr[8] = {1,4,1,3,2,4,3,7};
    int n = 8; 

    countSort(arr, n);


    return 0;
}