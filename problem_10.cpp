/*problem-maximum consecutive sequence*/
/*approach-1 T.C->O(n) S.C->O(n)*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        int maxLength=0;
        for(int i=0;i<n;i++)
        {
            if(s.count(nums[i]))
            {
                int fwd=nums[i]+1;
                int bwd=nums[i]-1;
                while(s.count(fwd))
                {
                    s.erase(fwd);
                    fwd++;
                }
                while(s.count(bwd))
                {
                    s.erase(bwd);
                    bwd--;
                }
                maxLength=max(maxLength,fwd-bwd-1);
            }
        }
        return maxLength;
    }
};

/*approach-2 T.C->O(nlogn) S.C->O(1)*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int currentCount=1;
        int longestCount=0;
        if(n == 0)
        {
            return 0;
        }
        for(int i=1;i<n;i++)
        {
            if(nums[i] != nums[i-1])
            {
                if(nums[i]-nums[i-1] == 1)
                {
                    currentCount++;
                }
                else{
                    longestCount=max(longestCount,currentCount);
                    currentCount=1;
                }
            }
            else
            {
                continue;
            }
        }
        return max(currentCount,longestCount);
    }
};