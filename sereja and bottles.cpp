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
 	cin>>n;
 	int a[n],b[n];
 	for(i=0;i<n;i++)
 	{
 		cin>>a[i]>>b[i];
	 }
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
		 
		if(b[j]==a[i] && j!=i)
		{
			c++;
			break;
		}
		}
	}
		cout<<n-c;
 
return 0;
}





