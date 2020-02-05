  #include <bits/stdc++.h>
  using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<long long int,long long int> pll;
typedef vector<long long int> vl;
#define all(c) c.begin(), c.end()
#define pb push_back
#define mp make_pair
vector<int> vi;

int main()
{
	 ios_base::sync_with_stdio(false);
     cin.tie(NULL);

  int t,c=0,i,j,p,x,y,osum,nsum=0,m,v;
 	int n;
 	cin>>t;
 	map<string,int> hash;
 	while(t--)
 	{
 		string s;
 		cin>>s;
 		hash[s]++;
 		
    }
    map<string,int> :: iterator itr;
    string ans;
    for(itr=hash.begin();itr!=hash.end();itr++)
    {
    	if(itr->second>c)
    	{
    		c=itr->second;
    		ans=itr->first;
		}
	}
	cout<<ans;
return 0;
}





