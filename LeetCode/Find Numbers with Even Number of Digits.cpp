class Solution {
private:
    int num_digits(int a) {
        if (a == 0) return 1;
        int count = 0;
        while (a) {
            count ++;
            a /= 10;
        }
        return count;
    }
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for (auto &i : nums) 
        {
            auto count = num_digits(i);
            if (count % 2 == 0) 
            res ++;
        }
        return res;
    }
};
