/*problem -contains duplicate*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(),nums.end()).size();
    }
};
/*approach 2*/

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_map<int,int>mp;
//         bool duplicate=false;
//         for(int i=0;i<nums.size();i++)
//         {
//             mp[nums[i]]++;
//         }
//         for(auto j:mp)
//         {
//             if(j.second >= 2)
//             {
//                 duplicate=true;
//             }
//         }
//         return duplicate;
//     }
// };

/*approach-1*/
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         int n=nums.size();
//         bool duplicate=false;
//         sort(nums.begin(),nums.end());
//         for(int i=1;i<n;i++)
//         {
//             if(nums[i-1] == nums[i])
//             {
//                 duplicate=true;
//             }
//         }
//         return duplicate;
//     }
// };