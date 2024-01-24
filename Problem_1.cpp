/*Problem Name- Pascal's Triangle*/
/*approach-1 using recursion*/
class Solution {
public:
void solve(vector<vector<int>>&ans,vector<int>&prev,int index,int numRows)
{
    if(index >= numRows)
    {
        return;
    }
    vector<int>curr;
    curr.push_back(1);
    for(int i=1;i<index;i++)
    {
        curr.push_back(prev[i]+prev[i-1]);
    }
    curr.push_back(1);
    ans.push_back(curr);
    solve(ans,curr,index+1,numRows);
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>prev;
        prev.push_back(1);
        ans.push_back(prev);
        int index=1;
        solve(ans,prev,index,numRows);
        return ans;
    }
};
/*approach-2 using iteration method*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        int n=numRows;
        for(int i=0;i<n;i++)
        {
            vector<int>row(i+1,1);
            for(int j=1;j<i;j++)
            {
                row[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(row);
        }
        return ans;
    }
};