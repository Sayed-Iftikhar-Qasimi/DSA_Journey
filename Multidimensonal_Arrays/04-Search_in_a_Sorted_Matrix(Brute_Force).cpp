#include<iostream>
using namespace std; 

void Search(int arr[][4], int n,int m,int target)
{   
    int row, col;

    for(int r=0; r<n; r++)
    {
        for(int c=0; c<m; c++)
        {
            if(target == arr[r][c])
            {
                cout << "The value " << target << " is on: [" << r << "][" << c << "]" << endl;
                return ;  
               }   }
    }
}

int main()
{
    int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
    int n = 4; 
    int m = 4; 
    int target = 13; 

    Search(arr,n ,m,target);
    return 0;
}