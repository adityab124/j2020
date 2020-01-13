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

  int c=0,i,j,p,x,y,osum,nsum=0,m,v;
 	int n;
 	string s;
 	cin>>s;
 	char z='.';
 	string t;
 
  for(i=0;i<s.length();i++)
        {
            if(s[i]==z)
                {
                	t+="[.]";
				}
				else
				t.push_back(s[i]);
        }
    
        for(i=0;i<t.length();i++)
        cout<<t[i];
return 0;
}





