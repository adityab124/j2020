class Solution {
public:
    int titleToNumber(string s) {
        int p=1;
        int sum=s[s.length()-1]-'A'+1;
        if(s.length()==1)
            return sum;
        for(int i=s.length()-2;i>=0;i--)
        { 
           
                sum+=(s[i]-'A'+1)*pow(26,p);
            
            p++;
            
        }
    return sum;
    }
};
