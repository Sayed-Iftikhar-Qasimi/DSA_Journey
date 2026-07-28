#include<iostream>
using namespace std; 

void PrintSubarrays(int arr[], int n)
{

    for(int start=0; start<n; start++)
    {
        for(int end=start; end<n; end++){
            
            for(int i=start; i<=end; i++)
            { 
                cout << arr[i];
            }
            cout << ",";

        }
        cout << endl;

    }

}

int main()
{
    int n = 5; 
    int arr[n] = {1,2,3,4,5};

    PrintSubarrays(arr, n);


    return 0;
}