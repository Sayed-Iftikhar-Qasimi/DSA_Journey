#include<iostream>
using namespace std; 

void diagonalSum(int arr[][4], int rows ,int cols)
{

    int primaryDiagonalSum = 0 ; 
    int secondryDiagonalSum = 0 ; 

    for(int r=0; r<rows; r++)
    {
        for(int c=0; c<cols; c++)
        {
            if(r==c){
                primaryDiagonalSum += arr[r][c];
            }else if(r+c==cols-1)
            {
                secondryDiagonalSum += arr[r][c];
            }

        }
    }
    cout << "Primary Diagonal Sum: " << primaryDiagonalSum << endl;
    cout << "Secondy Diagonal Sum: " << secondryDiagonalSum << endl;
}

int main()
{
    int c = 4; 
    int r = 4; 
    int arr[4][4] = { {1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16} };

    diagonalSum(arr, r, c);

    return 0;
}