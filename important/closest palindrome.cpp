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

////////////////////////////////////////////////////////////////////////////////////////////////////////

bool isp(string n)
{
	for(int i=0;i<n.size()/2;i++)
	if(n[i] != n[n.size()-i-1])
	return false;
  	return true;
}

string numtostr(int num)
{
	if(num==0)
	return "0";
	string snum="";
	while (num>0)
	{
		snum += (num%10 - '0');
		num/=10;
	}
	return snum;
}

int closestp(int x)
{
	int lnum=x-1;
	int rnum=x+1;
	while(!isp(numtostr(abs(lnum))))
	lnum--;
	while(!isp(numtostr(abs(rnum))))
	rnum++;
	
	if(abs(x-rnum)<abs(x-lnum))
	return rnum;
	else
	return lnum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t, i, j, k, p, q, r, x, y, u, v, n, m;
cin>>x;
cout<<closestp(x)<<endl;
    return 0;
}

/////////////////////////////////////////////////////////////////////////
//An efficient solution is to consider following cases.
//
//Case 1: If a number contains all 9’s then we get next closest Palindrome by simply adding 2 in it. num = 999 : output : num + 2 = 1001.
//
//Case 2:
//Case 2 a :One possible way to getting closest palindromic by Copy first half and add mirror image at the end if it. Left half : For example, left side of “123 456” is “123” and left half of “12345” is “1 2”. To convert to palindrome, we can either take the mirror of its left half or take mirror of its right half. However, if we take the mirror of the right half, then the palindrome so formed is not guaranteed to be the closest palindrome. So, we must take the mirror of left side and copy it to right side.
//
//Let's number : 123456 
//After copy and append reverse of it at the end number looks like:
//we get palindrome 123321
//case 2 b and 2c: Two more possible ways of getting the closest palindromic number by decrementing and incrementing middle digit by one on palindrome.
//
//Below is the implementation of above idea :
//	#include <bits/stdc++.h> 
//using namespace std; 
//  
//#define CToI(x) (x - '0') 
//#define IToC(x) (x + '0') 
//  
//// function check Palindrome 
//bool isPalindrome(string n) 
//{ 
//    for (int i = 0; i < n.size() / 2; i++) 
//        if (n[i] != n[n.size() - 1 - i]) 
//            return false; 
//    return true; 
//} 
//  
//// check all 9's 
//bool checkAll9(string num) 
//{ 
//    for (int i = 0; i < num.size(); i++) 
//        if (num[i] != '9') 
//            return false; 
//    return true; 
//} 
//  
//// Add carry to the number of given size 
//string carryOperaion(string num, int carry, int size) 
//{ 
//    if (carry == -1) 
//    { 
//        int i = size - 1; 
//        while (i >= 0 && num[i] == '0') 
//            num[i--] = '9'; 
//        if (i >= 0) 
//            num[i] = IToC(CToI(num[i]) - 1); 
//    } 
//    else
//    { 
//        for (int i = size - 1; i >= 0; i--) 
//        { 
//            int digit = CToI(num[i]); 
//            num[i] = IToC((digit + carry) % 10); 
//            carry = (digit + carry) / 10; 
//        } 
//    } 
//    return num; 
//} 
//  
//// function return the closest number 
//// to given number 
//string MIN(long long int num, 
//           long long int num1, 
//           long long int num2, 
//           long long int num3) 
//{ 
//  
//    long long int Diff1 = abs(num - num1); 
//    long long int Diff2 = abs(num - num2); 
//    long long int Diff3 = abs(num3 - num); 
//  
//    if (Diff1 < Diff2 && Diff1 < Diff3 && 
//        num1 != num) 
//        return to_string(num1); 
//    else if (Diff3 < Diff2 && (Diff1 == 0 || 
//             Diff3 < Diff1)) 
//        return to_string(num3); 
//    else
//        return to_string(num2); 
//} 
//  
//// function return closest Palindrome number 
//string closestPlandrome(string num) 
//{ 
//  
//    // base case 
//    if (num.size() == 1) 
//        return (to_string(stoi(num) - 1)); 
//  
//    // case 2: 
//    // If a number contains all 9's 
//    if (checkAll9(num)) 
//    { 
//        string str = "1"; 
//        return str.append(num.size() - 1, '0') + "1"; 
//    } 
//  
//    int size_ = num.size(); 
//  
//    // case 1 a: 
//    // copy first half and reverse it and append it 
//    // at the end of first half 
//    string FH = num.substr(0, size_ / 2); 
//    string odd; 
//  
//    // odd length 
//    if (size_ % 2 != 0) 
//        odd = num[size_ / 2]; 
//  
//    // reverse 
//    string SH = FH; 
//    reverse(SH.begin(), SH.end()); 
//  
//    // store three nearest Palindrome numbers 
//    string RPNUM = "", EPNUM = "", LPNUM = ""; 
//    string tempFH = ""; 
//    string tempSH = ""; 
//  
//    if (size_ % 2 != 0) 
//    { 
//        EPNUM = FH + odd + SH; 
//        if (odd == "0") 
//        { 
//            tempFH = carryOperaion(FH, -1, FH.size()); 
//            tempSH = tempFH; 
//            reverse(tempSH.begin(), tempSH.end()); 
//            RPNUM = tempFH + "9" + tempSH; 
//        } 
//        else
//            RPNUM = FH + to_string(stoi(odd) - 1) + SH; 
//  
//        // To handle carry 
//        if (odd == "9") 
//        { 
//            tempFH = carryOperaion(FH, 1, FH.size()); 
//            tempSH = tempFH; 
//            reverse(tempSH.begin(), tempSH.end()); 
//            LPNUM = tempFH + "0" + tempSH; 
//        } 
//        else
//            LPNUM = FH + to_string(stoi(odd) + 1) + SH; 
//    } 
//  
//    // for even case 
//    else
//    { 
//        int n = FH.size(); 
//        tempFH = FH; 
//        EPNUM = FH + SH; 
//        if (FH[n - 1] == '0') 
//            tempFH = carryOperaion(FH, -1, n); 
//        else
//            tempFH[n - 1] = IToC(CToI(FH[n - 1]) - 1); 
//  
//        tempSH = tempFH; 
//        reverse(tempSH.begin(), tempSH.end()); 
//        RPNUM = tempFH + tempSH; 
//  
//        tempFH = FH; 
//        if (FH[n - 1] == '9') 
//            tempFH = carryOperaion(FH, 1, n); 
//        else
//            tempFH[n - 1] = IToC(CToI(tempFH[n - 1]) + 1); 
//  
//        tempSH = tempFH; 
//        reverse(tempSH.begin(), tempSH.end()); 
//        LPNUM = tempFH + tempSH; 
//    } 
//  
//    // return the closest palindrome numbers 
//    return MIN(stoll(num), stoll(EPNUM), stoll(RPNUM), 
//                                         stoll(LPNUM)); 
//} 
//  
//// Driver program to test above function 
//int main() 
//{ 
//    string num = "123456"; 
//    cout << closestPlandrome(num) << endl; 
//    return 0; 
//} 



