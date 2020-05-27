class Solution {
public:
    vector<string> fizzBuzz(int n) {
      vector<string> v(n);
        for(int i=1; i<=n; ++i)
        {
            if(0 == i%3)
            {
               v[i-1] += "Fizz";
            }
            if(0 == i%5)
            {
               v[i-1] += "Buzz";
            }
            else if(i%3!=0 && i%5!=0)
            {
                v[i-1] += to_string(i);
            }
        }
        return v;
    }
};
