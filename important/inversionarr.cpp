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
 	 int c=0,i,p,x,y,osum,nsum=0,m,v,d;
 	 int n;
 	 cin>>n;
 	 int a[n];
 	 int j=n-1;
 	 int k=0;
 	 for(i=0;i<n;i++)
	cin>>a[i];

	for(k=0;k<n-1;k++)
	{
		if(a[k]<a[k+1])
		{
			d=a[k];
			a[k]=a[k+1];
			a[k+1]=d;
			c++;
		
		}	
	}
	cout<<c<<endl;

	
 
    }
return 0;
}





