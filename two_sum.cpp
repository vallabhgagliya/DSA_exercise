class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i,j;
        {
            for (i=0; i<n; i++)
            
            {
                cout<<i;
                for (j=i+1; j<n; j++)
                {
                    if (nums[i]+nums[j]==target)
                    {
                        return{i,j};
                    }
                }
            }
        }
        return{-1,-1};
    }
};