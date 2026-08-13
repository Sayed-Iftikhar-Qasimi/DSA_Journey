#include<iostream>
#include<utility>
using namespace std; 

pair<int, int> Search(int arr[][4], int n , int m , int target)
{
    int col = m-1;
    int row = 0;
    while(row<3 || col>0)
    {
        int start = arr[row][col];

        if(start==target)
            return{row, col};
        else if(start>target)
            col--;
        else
            row++;
    }
     
    return {-1,-1};
}

int main()
{

    int arr[4][4] = { {10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,38,50}                
                    };
    int row = 4; 
    int col = 4; 
    int target = 50; 

    auto[a, b] = Search(arr,row, col, target);

    if(a !=-1 && b != -1)
        cout << "Target found on location [" << a << "][" << b << "]" << endl;
    else
        cout << "Target not found."  << endl;



    return 0;
}