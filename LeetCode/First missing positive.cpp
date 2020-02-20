  #include <bits/stdc++.h>
  using namespace std;

int firstMissingPositive(vector<int>& nums) 
{
        int n=nums.size();
        bool p[n+1]={false};
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0 && nums[i]<=n)
                p[nums[i]]=true;
        }
        for(int i=0;i<=n;i++)
            if(!p[i])
                return i;
        return n+1;
}
int main()
{
	 ios_base::sync_with_stdio(false);
     cin.tie(NULL);

  int x,t;
 	int n;
 	cin>>t;
 	vector<int>nums;
 	while(t--)
 	{cin>>x;
	nums.push_back(x);
    }
    cout<<firstMissingPositive(nums);
return 0;
}





