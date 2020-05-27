class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> s;
        int ans;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            s[nums[i]]++;
        }
       for(auto i=s.begin();i!=s.end();i++)
       {
           if(i->second > max)
           { 
               max=i->second;
                ans=i->first;
           }
           
       }
        return ans;
    }
};
