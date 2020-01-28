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

int f[1500],arr[1500];
int main()
{
    int n,i,j,ck=0;
    f[1]=1,f[2]=1,arr[1]=1;
    for(i=3; i<50; i++)
	{
      f[i] = f[i-1]+f[i-2];
      if(f[i]>1000) break;
      arr[f[i]]=1;
   }
    cin>>n;
    for(i=1; i<=n; i++){
        if(arr[i])
            cout<<"O";
        else
            cout<<"o";
    }
}




