#include<iostream>
#include<algorithm>
using namespace std; 

void bubbleSort(int num[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(num[j] > num[j+1])
                swap(num[j], num[j+1]);
        }
    }


    for(int i=0; i<n; i++)
    {
        cout << num[i] << " ";
    }


}

int main()
{
   int num[] = {12, -5, 0, 8, -2, 3, -10};
   int n = sizeof(num) / sizeof(int);

    bubbleSort(num,n);




    return 0;
}