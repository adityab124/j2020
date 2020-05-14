 #include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define INF 1000000000000000003
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%I64d",&x)
#define ss(s)	scanf("%s",s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pll>		vpll;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;


///////////////////////////////////////////////////////////////////////////////////////////////////////////
int maxsum(int a[],int x)
{
   int max_so_far = a[0]; 
   int curr_max = a[0]; 
	  
	   for (int i = 1; i < x; i++) 
	   { 
	        curr_max = max(a[i], curr_max+a[i]); 
	        max_so_far = max(max_so_far, curr_max); 
	   } 
   return max_so_far; 
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t, i, j, k, p, q, r, x, y, u, v, n, m;
    cin>>x;
	int a[x];
	fo(i,x)
	cin>>a[i];
	m=maxsum(a,x);
	cout<<"ans is "<<m;
    return 0;
}



