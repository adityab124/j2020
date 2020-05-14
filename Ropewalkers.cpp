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

  int t,i,j,p,x,y,osum,s=0,m,v;
  int w,b,c,d;
 	int n;
 	int a[3];
 	for(i=0;i<3;i++)
 	cin>>a[i];
 	cin>>d;
 	sort(a,a+3);

     cout << max(0, d - (a[1] - a[0])) + max(0, d - (a[2] - a[1])) << '\n';


return 0;
}


