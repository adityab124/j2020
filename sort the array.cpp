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
    int n,a[100005];
cin>>n;
    for(int i=1;i<=n;i++)
	cin>>a[i];
    a[0]=INT_MIN;
    a[n+1]=INT_MAX;
    int l=1,r=1,f=0;
    for(int i=1;i<=n;i++){
        if(a[i+1]<a[i] && f==0)
            l=i,f=1;
        else if(a[i+1]<a[i] && f==2){
            cout<<"no\n";
            return 0;
        }
        if(a[i+1]>a[i] && f==1){
            if(a[i+1]<a[l] || a[i]<a[l-1]){
                cout<<"no\n";
                return 0;
            }
            r=i,f=2;
        }
    }
    cout<<"yes\n"<<l<<' '<<r<<endl;
return 0;
}
//int main()
//{int j,k,i,x,n,d,l,maximum,c=0,p,q,co=0;
//
/////take array input
//
//cin>>x;	
//int a[x];
//int b[x];
//for(i=0;i<x;i++)
//{
//	cin>>a[i];
//	b[i]=a[i];
//}
//sort(b,b+x);
/////sorting algorithm
//for(i=0;i<x;i++)
//{
//	if(b[i]==a[i])
//	co++;
//}
//if(co==x)
//cout<<"yes"<<endl<<a[0]<<" "<<a[0]<<endl;
//else
//{
//for(i=0;i<x;i++)
//{
//	if (a[i]!=b[i])
//	{
//		c++;
//		vi.push_back(i);
//		
//	}
//}
//if(c==2)
//cout<<"yes"<<endl<<vi[0]+1<<" "<<vi[1]+1<<endl;
//else
//cout<<"no";
//}
//return 0;
//}





