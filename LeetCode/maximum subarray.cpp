class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mend=nums[0];
        int msf=nums[0];
        for(int i=1;i<nums.size();i++)
        {
         mend=max(nums[i],mend+nums[i]);
           msf=max(msf,mend); 
        }
        
        return msf;
    }
};
