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
 	cin>>t;
 	int a[t];
 for(i=0;i<t;i++)
 {
 	cin>>a[i];
 	c+=a[i];
 }
 t=t++;
 for(i=1;i<6;i++)
 {  
 	c+=i;
 	if(c%t!=0)
 	{
 	nsum++;
 	
 	}
 }
 cout<<nsum;

return 0;
}




