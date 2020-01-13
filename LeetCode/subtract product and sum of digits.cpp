class Solution {
public:
    int subtractProductAndSum(int n) {
        int m,sum=0,pro=1,ans;
        m=n;
        while(n!=0)
        {
            pro*=n%10;
            sum+=m%10;
            n/=10;
            m/=10;
        }
        ans=pro-sum;
        return ans;
    }
};
