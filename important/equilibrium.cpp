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
 	 cin>>n;
 	 int a[n];
 	 int j=n-1;
 	 int k=0;
 	 for(i=0;i<n;i++)
 	 {
	  
	cin>>a[i];
	c+=a[i];
	}
	for(p=0;p<n;p++)
	{
		c=c-a[p];
		if(lsum==c)
		{
			cout<<p+1<<endl;
			x++;
		}
		lsum=lsum+a[p];
	}
	if(x==0)
	cout<<-1<<endl;
    }
return 0;
}





