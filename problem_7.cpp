/*T.C-> O(nlogn) S.C->O(1) mergesort approach*/
class Solution {
public:
    int ans=0;
    void merge(vector<int>& nums,int left,int mid,int right)
    {
        int i=left;
        int j=mid+1;
        while(i <= mid && j <= right)
        {
            if((long long)nums[i] > (long long)2*nums[j])
            {
                ans+=(mid-i+1);
                j++;
            }
            else
            {
                i++;
            }
        }
        sort(nums.begin()+left,nums.begin()+right+1);
    }
    void mergeSort(vector<int>& nums,int left,int right)
    {
        if(left == right)
        {
            return;
        }
        int mid=left+((right-left)/2);
        mergeSort(nums,left,mid);
        mergeSort(nums,mid+1,right);
        merge(nums,left,mid,right);
    }
    int reversePairs(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        if(nums.size() == 0)
        {
            return 0;
        }
        mergeSort(nums,left,right);
        return ans;
    }
};

/*approach-2 iteration TLE!! */
// class Solution {
// public:
//     int reversePairs(vector<int>& nums) {
//         int checkCount=0;
//         int n=nums.size();
//         for(int i=0;i<n-1;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(nums[i] > 2*(long long)nums[j])
//                 {
//                     checkCount++;
//                 }
//             }
//         }
//         return checkCount;
//     }
// };