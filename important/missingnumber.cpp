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
 	int n;
 	cin>>t;
 	while(t--)
 	{
 	int c=0,i,j,p,x,y,osum,nsum=0,m,v;

 	cin>>n;
 	int a[n];
 	for(i=0;i<n-1;i++)
 	{
	 cin>>a[i];
	 c+=a[i];
 	}
 	while(n!=0)
 	{
 	nsum+=n;
 	n--;
 	}
	 cout<<nsum-c<<endl;
    }
return 0;
}





