#include<bits/stdc++.h>
using namespace std;

//func to remove duplicates
void remove_dup(string &str)
{
	string temp;
	
	int i=0;
	while(i<str.size())
	{
		if(str[i]!=str[i+1])
		 temp.push_back(str[i]);
		else
		{
			//skip those many characters
			while(str[i]==str[i+1])
			 i++;
		}
		i++;
	}
	
	if(temp==str)
	 return;
	else
	{
		str=temp;
		remove_dup(str);
	}
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string s;
		cin>>s;
		remove_dup(s);
		cout<<s<<"\n";
		
	}
	return 0;
}
