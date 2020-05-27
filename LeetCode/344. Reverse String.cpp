class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        
        if (len < 2) return;
        
        for (int left=0, right=len - 1; left < right; left++, right--) {
            //swap left and right
            swap(s[left], s[right]);
        }    
    }
};
//////////////////////////////// OR JUST USE REVERSE(S.BEGIN(),S.END());//////////////
