class Solution {
public:
    int a[100001];
    int count(int n) {
        if(a[n]!=0) return a[n];
        else if(n==1) return a[n]=1;
        else if(n%2==0) return a[n]=count(n/2);
        else return a[n]=count((n-1)/2)+1;
    }

    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        while(n--) count(n+1), ans[n+1]=a[n+1];
        return ans;
    }
};