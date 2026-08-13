#include<iostream>
using namespace std; 

void DiagonalSum(int arr[3][3], int n)
{
    int primaryDiagonalSum = 0 ;
    int secondryDiagonalSum = 0 ; 
    int j = 0; 
    
    for(int i=0; i<n; i++)
    {   
    
        primaryDiagonalSum += arr[i][i];

        if(i!=n-i-1)
            secondryDiagonalSum += arr[i][n-i-1];
      
    }

    cout << "Primary Diagonal Sum: " << primaryDiagonalSum << endl;
    cout << "Secondry Diagonal Sum: " << secondryDiagonalSum << endl;
}

int main(){
    
    int n = 3;  

    int arr[3][3] = { {1,2,13},
                      {4,15,6},
                      {7,8,9} };


    DiagonalSum(arr,n);
    // int total = DiagonalSum(arr, r, c);

    // cout << "Diagonal Sum: " << total << endl;

    return 0;
}