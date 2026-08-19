#include<iostream>
#include<algorithm>
#include<vector>
using namespace std; 

pair<int, int> TwoSum(vector<int> &nums, int target)
{
   
    int start = 0 ; 
    int end = nums.size() - 1; 
    
    while(start<end)
    {
        int current_sum = nums[start] + nums[end];
        if(current_sum == target)
            return {start, end};

        else if(current_sum > target)
            end--;
        else
            start++;
    }

    return {-1,-1};
}

int main()
{
    vector <int> nums = {3,7,9,10,11};
    int target = 19;

    auto p = TwoSum(nums, target);

    cout << "(" << p.first << ", " << p.second << ")" << endl;
 

    return 0;
}


