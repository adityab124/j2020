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

bool check(string r)
{
	 stack<char> s;
 	 char x;
 	 for(int i=0;i<r.length();i++)
 	 {
 	 	if(r[i]=='(' || r[i]=='{' || r[i]=='[')
 	 	{
		s.push(r[i]);
 	 	continue;
 	 	}
 	 	if(s.empty())
 	 	return false;
 	 	
 	 	switch(r[i])
 	 	{
 	 		case')':
 	 			x=s.top();
 	 			s.pop();
 	 			if(x=='{' || x=='[')
 	 			return false;
 	 			break;
 	 		case'}':
			  x=s.top();
			  s.pop();
			  if(x=='(' || x=='[')
			  return false;
			  break;
			case']':
			x=s.top();
			s.pop();
			if(x=='{' || x=='(')
			return false;
			break;	
		  }
	  }
	  return(s.empty());
}

int main()
{
	 ios_base::sync_with_stdio(false);
     cin.tie(NULL);

  int t;
 	cin>>t;
 	while(t--)
 	{
 	 int c=0,i,p,y,osum,lsum=0,m,v,d;
 	 int n;
 	 string r;
 	 cin>>r;
 	 if(check(r))
 	 cout<<"balanced"<<endl;
 	 else
 	 cout<<"not balanced"<<endl;
 	}
return 0;
}





