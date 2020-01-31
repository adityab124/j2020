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
 int i,j,p,x,y,osum,nsum=0,m,v;
  	int n;
  	cin>>n>>m;
  	v=n+m;
  	int a[n],b[m];
  	for(i=0;i<n;i++)
  	cin>>a[i];
  	for(i=0;i<m;i++)
  	cin>>b[i];
  	int c[v];
  	for(i=0;i<n;i++)
  	c[i]=a[i];
  	for(i=n;i<v;i++)
  	{
  		c[i]=b[i-n];  		
	}
	  sort(c,c+v);
	for(i=0;i<v;i++)
	cout<<c[i]<<" ";

  	
cout<<endl;
    }
return 0;
}





