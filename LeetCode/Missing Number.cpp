int missingNumber(vector<int>& nums) {
        int find = 0;
        for(int i=0; i<nums.size();i++)
            find += i-nums[i];
        return find+nums.size();
    }
    
//    int missingNumber(int* nums, int numsSize) {
//    int n = 0;
//    for (int i = 0; i < numsSize; i++) {
//        n ^= i ^ nums[i];
//    }
//    return n ^ numsSize;
//}
