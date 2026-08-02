#include<iostream>
using namespace std; 

int trap(int height[], int n)
{
    int trap_water = 0 ;

    int leftmax[10000];
    int rightmax[10000];
    

    leftmax[0] = height[0];
    rightmax[n-1] = height[n-1];


    for(int i=1; i<n; i++)
        leftmax[i] = max(leftmax[i-1],height[i-1]);
    
    for(int i=n-2; i>=0; i--)
        rightmax[i] = max(rightmax[i+1], height[i+1]);

    for(int i=0; i<n; i++)
    {
        int bar_level =(min(leftmax[i], rightmax[i]) - height[i]);
        trap_water += max(0, bar_level);
    }
    return trap_water;
}

int main()
{
    int height[] = {3, 0, 1, 0, 4, 0, 2}; 
    int n = sizeof(height) / sizeof(int);
 
    int result = trap(height,n);

    cout << "Total Trap Waters: " << result << endl;
    return 0; 
}