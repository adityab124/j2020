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

void checkPrimeNumber(int n)
{int c=0;
int i;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c>1)
	cout<<n<<" is not a prime number.";
	else
	cout<<n<<" is a prime number.";
}
void checkArmstrongNumber(int n)
{int p;
	int m=n;
	while(n!=0)
	{
		int k=n%10;
		p=p+k*k*k;
		n=n/10;
	}
	if(p==m)
	cout<<m<<" is an Armstrong number.";
	else
	cout<<m<<" is not an Armstrong number.";
}

int main()
{int n;
cin>>n;
checkPrimeNumber(n);
cout<<endl;
checkArmstrongNumber(n);

 

return 0;
}


