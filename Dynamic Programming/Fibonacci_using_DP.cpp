#include<iostream>
using namespace std;
// this is the best approach of DP
//bottom up approach
int BottomUp(int n,int *dp)
{
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=BottomUp(i-1)+BottomUp(i-2);
    }
    return dp[n];
}
// top down approach of dynamic programming
int topDown(int n,int *dp)
{
    if(n==0 || n==1)
    {
        dp[n]=n;
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int ans=topDown(n-1,dp)+topDown(n-2,dp);
    dp[n]=ans;
    return ans;
}

int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    int ans=fib(n-1)+fib(n-2);
    return ans;
}

int main()
{
    int dp[1000],n;
    for(int i=0;i<1000;i++)
    {
        dp[i]=-1;
    }
    cout<<topDown(8,dp);
    // int ans=fib(8);
    // cout<<ans;
    return 0;
}