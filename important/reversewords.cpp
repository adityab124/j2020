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
 	 int c=0,i,p,x=0,y,osum,lsum=0,m,v,d;
 	 int n;
 	 string s;
 	 cin>>s;
 	 reverse(s.begin(),s.end());
 	 string temp="";
 	 for(i=0;i<s.length();i++)
 	 {
 	 	if(s[i]!='.')
 	 	{
 	 		temp+=s[i];
		  }
		  else
		  {
		  	reverse(temp.begin(),temp.end());
		  	cout<<temp<<".";
		  	temp="";
		  }
	  }
 	 reverse(temp.begin(),temp.end());
 	 cout<<temp<<endl;
    }
return 0;
}





