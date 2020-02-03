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

int num(char r) 
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
  
    return -1; 
} 

int main()
{
	 ios_base::sync_with_stdio(false);
     cin.tie(NULL);

  int t;
 	cin>>t;
 	while(t--)
 	{
 	 int c=0,i,x,y,osum,lsum=0,m,v,d;
 	 int n;
 	 string s,r;
 	 cin>>s;
for(i=0;i<s.length();i++)
{
	x=num(s[i]);
	if(i+1<s.length())
	{
		y=num(s[i+1]);
		if(x>=y)
		c=c+x;
		else
		{
		c=c+y-x;
		i++;
		}
	}
	else
	c=c+x;		
}
cout<<c<<endl;		
}

return 0;
}





