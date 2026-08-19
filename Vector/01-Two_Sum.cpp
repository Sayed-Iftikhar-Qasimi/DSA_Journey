#include<iostream>
#include<utility>
#include<vector>
using namespace std; 

pair<int,int> TwoSum(vector<int> &nums, int target)
{
    for(int start=0; start+1<nums.size(); start++)
    {
        for(int end=start+1; end<nums.size(); end++)
        {
            if(nums[start] + nums[end] == target)
                return {start, end};

            
        }
    }

    return {-1,-1};
}

int main()
{
    vector<int> nums = {3,3};
    int target = 6;


    auto p = TwoSum(nums, target);
    
    cout << "("<< p.first << ", " << p.second <<")" << endl;

    return 0;
}