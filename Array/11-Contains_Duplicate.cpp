#include<iostream>
using namespace std; 

bool containsDuplicate(int arr[], int n)
{

    for(int i=0; i<n-1; i++)
    {
        int start = i+1;
        for(int j=start; j<n; j++)
        {
            if(arr[i]==arr[j])
                return true;
        }
    }

    return false;

}

int main(){

    int arr[] = {1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(arr) / sizeof(int);

    bool result = containsDuplicate(arr, n);
    if(result==true)
        cout << "Duplicate Found." << endl;
    else
        cout << "Duplicate not Found." << endl;
    

    return 0;
} 