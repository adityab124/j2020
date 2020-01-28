class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int i,k,c=0;
        for(i=0;i<J.length();i++)
        {
            for(k=0;k<S.length();k++)
            {
                if(S[k]==J[i])
                    c++;
            }
        }
        return c;
    }
};
