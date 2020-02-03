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

  int t;
 	cin>>t;
 	while(t--)
 	{
 	 int c=0,i,x=0,y,osum,lsum=0,m,v,d;
 	 int n;
 	 string s,r;
 	 cin>>s;
 	 cin>>r;
 	string p="";
 	string q="";
 	p=p+s.substr(s.length()-2,2)+s.substr(0,s.length()-2);
	  q=q+s.substr(2,s.length()-2)+s.substr(0,2);
	  if(r==p || r==q)
	  cout<<1<<endl;
	  else
	  cout<<0<<endl;
}
return 0;
}





