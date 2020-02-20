class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j,k;
        int c=0;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i]!=0)
            nums[c++]=nums[i];
        }
        while(c<n)
        {
            nums[c++]=0;
        }
    }
};
