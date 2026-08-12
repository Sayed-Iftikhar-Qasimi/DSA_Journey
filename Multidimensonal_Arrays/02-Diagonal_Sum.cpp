#include<iostream>
using namespace std; 

int diagonalSum(int arr[][4], int rows ,int cols)
{

    int primaryDiagonalSum = 0 ; 
    int secondryDiagonalSum = 0 ; 

    for(int r=0; r<rows; r++)
    {
        for(int c=0; c<cols; c++)
        {
            if(r==c){
                primaryDiagonalSum += arr[r][c];
            }else if(cols-1-r==c)
            {
                secondryDiagonalSum += arr[r][c];
            }

        }
    }
    
    int sum = primaryDiagonalSum + secondryDiagonalSum;
    return sum;
}

int main()
{
    int c = 4; 
    int r = 4; 
    int arr[4][4] = { {1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16} };

    int total = diagonalSum(arr, r, c);
    cout << "Diagonal Sum: " << total << endl;

    return 0;
}