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

  int t,c=0,i,j,x,y,osum,nsum=0,m,v;
  int p=0;
 string s;
 cin>>s;
 if(s[0]=='T' && s[1]=='N' )
 cout<<"Tamilnadu"<<endl;
 else  if(s[0]=='K' && s[1]=='L' )
 cout<<"Kerala"<<endl;
 else
 cout<<"Karnataka"<<endl;

if(s[5]=='0' && s[6]=='0' && s[7]=='0' && (s[8]>48 && s[8]<57))
p++;
if(s[8]-s[7]==1 && s[7]-s[6] && s[6]-s[5])
p++;
if(s[5]==s[6] && s[6]==s[7] && s[7]==s[8])
p++;
if(p>0)
cout<<"Fancy";
else
cout<<"Not fancy";

return 0;
}


