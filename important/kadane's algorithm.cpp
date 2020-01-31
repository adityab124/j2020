#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],i;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int sum=0,max=INT_MIN;
	    for(i=0;i<n;i++)
	    {
	        
	        sum=sum+a[i];
	        if(max<sum)
	        {
	            max=sum;
	        }
	        if(sum<0)
	        {
	            sum=0;
	        }
	    }
	    cout<<max<<endl;
	}
	
	return 0;
}
