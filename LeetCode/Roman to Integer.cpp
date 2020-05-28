class Solution {
public:
int romanToInt(string s) {
        
        map<char, int> m = {{'I', 1}, {'V', 5},{'X', 10},{'L', 50},
        {'C', 100},{'D', 500},{'M', 1000}};
        
        int total = 0;
        for(int i = 0; i < s.length(); i++){
            if(m[s[i+1]] <= m[s[i]])  
			total += m[s[i]]; 
            else  
			total -= m[s[i]];  
        }
        return total;
    }
};


//class Solution {
//public:
//    int romanToInt(string s) {
//        const int N = s.length(); 
//        int nums[128];    
//        nums['I'] = 1;
//        nums['V'] = 5;
//        nums['X'] = 10;
//        nums['L'] = 50;
//        nums['C'] = 100;
//        nums['D'] = 500;
//        nums['M'] = 1000;
//        int result = 0;  //???
//        for(int i = 0; i < N; ++i)
//        {
//            if(i + 1 < N && nums[s[i+1]] > nums[s[i]])  
//                result -=  nums[s[i]]; 
//            else
//                result += nums[s[i]];
//        }
//        return result;
//    }
//};
