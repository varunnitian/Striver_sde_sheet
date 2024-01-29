
/*problem -unique paths*/
class Solution {
public:
    int solve(int m,int n,int i,int j,int dp[101][101])
    {
        if(i >= m || j >= n)
        {
            return 0;
        }
        if(i == m-1 && j == n-1)
        {
            return 1;
        }
        if(dp[i][j] != 0)
        {
            return dp[i][j];
        }
        dp[i][j]=solve(m,n,i+1,j,dp)+solve(m,n,i,j+1,dp);
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        int i,j;
        int dp[101][101]{};
        int ans=solve(m,n,0,0,dp);
        return ans;
    }
};