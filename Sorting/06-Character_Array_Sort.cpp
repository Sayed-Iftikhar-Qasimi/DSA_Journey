#include<iostream>
#include<iterator>
using namespace std; 

void print(char arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

void characterArraySort(char arr[], int n)
{

    for(int i=1; i<n; i++)
    {
        int curr = arr[i];
        int prev = i - 1; 

        while(prev>=0 && arr[prev] < curr)
        {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr; 
    }

    print(arr, n);
}

int main()
{
    char arr[] = {'f','b','a','e','c'};
    int n = size(arr);

    characterArraySort(arr, n);
    
    return 0;
}