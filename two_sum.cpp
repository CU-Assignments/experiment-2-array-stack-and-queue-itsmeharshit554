#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> vec;
       int sum=0;
       for(int i=0;i<nums.size();i++)
       {    
           for(int j=i+1;j<nums.size();j++)
           {
               sum=nums[i]+nums[j];
               if(sum==target)
               {
                   vec.push_back(i);
                   vec.push_back(j);
                   return vec;
               }

           }
       }
       return vec;
    }
};