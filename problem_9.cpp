/*problem 4 sum*/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                long long remain=(long long)target-((long long)nums[i]+(long long)nums[j]);
                int k=j+1,l=n-1;
                while(k < l)
                {
                    if(nums[k]+nums[l] < remain)
                    {
                        k++;
                    }
                    else if(nums[k]+nums[l] > remain)
                    {
                        l--;
                    }
                    else
                    {
                        s.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }

                }
            }
        }
        for(auto i:s)
        {
            ans.push_back(i);
        }
        return ans;
    }
};