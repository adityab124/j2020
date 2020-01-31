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
 	 int i,p,q,j,x,y,osum,nsum=0,m,v;
 	 int n;
 	 float c=0;
 	 cin>>n>>m;
 	 int a[n];
 	 int b[m];
 	 for(i=0;i<n;i++)
 	 cin>>a[i];
 	  for(i=0;i<m;i++)
 	 cin>>b[i];
 	 for(i=0;i<n;i++)
 	 {
 	 	for(j=0;j<m;j++)
 	 	{
 	 		q=pow(a[i],b[j]);
 	 		p=pow(b[j],a[i]);
 	 		if(p<q)
 	 		c++;
		}
		  
	  }
cout<<c<<endl;
    }
return 0;
}





