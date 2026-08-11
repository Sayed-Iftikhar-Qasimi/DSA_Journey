#include <iostream>
using namespace std; 

void print(int arr[][4], int rows, int cols)
{

    for(int r=0; r<rows; r++)
    {
        for(int c=0; c<cols; c++)
        {
            cout << arr[r][c] << "  ";
        }
        cout << endl;
    }
}

void spiralMatrix(int arr[][4], int rows, int cols)
{    
    int srow = 0; 
    int scol = 0 ;    
    int erow = rows- 1; 
    int ecol = cols - 1; 

    while(srow<=erow && scol<=ecol)    
    {             
    
            // Top
            for(int j=scol; j<=ecol; j++)
                cout << arr[srow][j] << "  ";
         
            // right
            for(int k=srow+1; k<=erow; k++)
                cout << arr[k][ecol]  << " ";
        
            // Bottom
            for(int l=ecol-1; l>=scol; l--){
                if (srow == erow)
                    break;
                cout << arr[erow][l] << " ";
            }
            // Left
            for(int m=erow-1; m>=srow+1; m--)
            {
                if(scol == ecol)
                    break;
                cout << arr[m][scol] << " ";}
            scol++;
            srow++; 
            erow--;
            ecol--;
        
}
}


int main()
{
    int arr[4][4] = { {1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16}
                     };

    int cols = 4; 
    int rows = 4; 

    spiralMatrix(arr,rows, cols);

    return 0;
}