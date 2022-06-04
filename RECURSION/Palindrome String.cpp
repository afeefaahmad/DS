// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

//////////////////////////////////////////////////////
class Solution{
public:	
	int helper(string S, int start, int end) {
     //Base Case
	    if(start >= end) {           //If pointer reach middle the it's a palindrome. 
	        return 1;
	    }
    
    //Small Task
	    if(S[start] != S[end]) {      //If first and last value(value pointed by first and last pointer) are not equal then not a palindrome.
	        return 0;
	    }
      //Recursion Task
	    return helper(S, start+1, end-1);
	}
	
	int isPalindrome(string S)
	{
	   int n = S.size() - 1;
	   return helper(S,0,n);
	}

};
///////////////////////////////////////////////////////////
// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
