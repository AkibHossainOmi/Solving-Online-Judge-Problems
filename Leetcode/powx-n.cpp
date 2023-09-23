class Solution {
public:
    double myPow(double a, long long int b)
    {
        double temp=1;
        if(b<0) return 1/myPow(a,(-1)*b);
        else if(b==0) return 1;
        else if(b==1) return a;
        else if (b%2==1) return myPow(a,b-1)*a;
        else temp = myPow(a,b/2);
        return temp*temp;
    }
};