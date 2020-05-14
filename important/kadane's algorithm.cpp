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

//int maxSubArraySum(int a[], int size) 
//{ 
//   int max_so_far = 0, max_ending_here = 0; 
//   for (int i = 0; i < size; i++) 
//   { 
//       max_ending_here = max_ending_here + a[i]; 
//       if (max_ending_here < 0) 
//           max_ending_here = 0; 
//  
//   
//       else if (max_so_far < max_ending_here) 
//           max_so_far = max_ending_here; 
//   } 
//   return max_so_far; 
//} 
