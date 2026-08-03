#include<iostream>
using namespace std; 

void printArr(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}


void selectionSort(int arr[], int n)
{

    for(int i=0; i<n-1; i++)
    {   
        int start = i+1;
        int minindex = i;
        for(int j=start; j<n; j++)
        {
            if(arr[minindex]>arr[j]){
                minindex = j;
            }
        }

        swap(arr[i], arr[minindex]);
    }

    printArr(arr,n);
}

int main()
{
    int arr[] = {1,3,4,2,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    return 0;
}