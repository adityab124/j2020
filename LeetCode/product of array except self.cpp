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
	int a[n];
	
 	int left[n];
 	for(i=0;i<n;i++)
 	left[i]=1;
// 	memset(left,1,sizeof(left));
 	int right[n];
// 	memset(right,1,sizeof(right));
	for(i=0;i<n;i++)
 	right[i]=1;
 	
 for(i=0;i<n;i++)
 {
 	cin>>a[i];
 }
 
 
  for(i=0;i<n;i++)
 {
  int p=0;
  int q=n-1;

 
 	while(p<i)
 	{
 		left[i]=left[i]*a[p];	
 		p++;
 		
	}
		while(q>i)
 	{
 		right[i]=right[i]*a[q];
		q--; 
		
	}
 }

 for(i=0;i<n;i++)
 cout<<left[i]*right[i]<<" ";
 

return 0;
}


