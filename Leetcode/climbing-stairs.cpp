class Solution {
public:
    long long int memo[46];
    int climbStairs(int n)
    {
        if(memo[n]!=0) return memo[n];
        else if(n==0) return memo[n]=1;
        else if(n==1) return memo[n]=1;
        return memo[n]=1LL*climbStairs(n-1)+1LL*climbStairs(n-2);
    }
};