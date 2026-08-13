#include<iostream>
#include<utility>
using namespace std; 

pair<int, int> Search(int arr[][4], int n,int m,int target)
{
    int low = 0 ; 
    int high = (n * m) - 1;


    while(low<=high)
    {
        int mid = (low+high) / 2; 
        int row = mid / m ; 
        int col = mid % m ; 

        if(arr[row][col] == target){
            return {row, col}; }
        else if(target>arr[row][col]){
            low = mid +1; 
        }else{
            high = mid - 1;
        }
    }

    return {-1, -1};
}
 
int main()
{
    int arr[4][4] = { {1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      };
    int n = 3; 
    int m = 4; 
    int target = 7; 

    auto[a, b] = Search(arr, n, m , target);
    
    if (a != -1 && b != -1)
        cout << "Target found on location [" << a << "][" << b << "]" << endl;
    else
        cout << "Target not found." << endl;

   
 
    return 0;
}