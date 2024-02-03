/*approach-1 using hashmaps for mapping number with its index T.C->O(n) S.C-> O(n)*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int check=target-nums[i];
            if(mp.count(check))
            {
                return {mp[check],i};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};

/*approach-2 using two loops T.C->O(n2) S.C->O(1)*/
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         int i,j;
//         for(i=0;i<n-1;i++)
//         {
//             for(j=i+1;j<n;j++)
//             {
//                 if(nums[i] + nums[j] == target)
//                 {
//                     return {i,j};
//                 }
//                 else
//                 {
//                     continue;
//                 }
//             }
//         }
//         return {i,j};
//     }
// };