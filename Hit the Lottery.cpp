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
 	while(n!=0)
 	{
 		if(n%100==0)
 		{
 		n-=100;
 		c++;
 		continue;
 		}
 		else if(n%20==0)
 		{
 		n-=20;
 		c++;
 		continue;
 		}
 		else if(n%10==0)
 		{
 		n-=10;
 		c++;
 		continue;
 		}
 		else if(n%5==0)
 		{
 		n-=5;
 		c++;
 		continue;
 		}
 		else if(n%1==0)
 		{
 		n-=1;
 		c++;
 		continue;

 		}
	 }
	 cout<<c;
    
return 0;
}





