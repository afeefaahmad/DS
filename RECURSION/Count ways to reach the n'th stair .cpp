// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
 ////////////////////////////////////////////////////////////////////////////
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        //BaseCase1
        if (n==1 || n==2) {
            return n;
        }
        
        //countWays(n-1) is recursionCall
        //countWays(n-2) is recursionCall
        
        //small task
        else{
        return countWays(n-1) + countWays(n-2);
        }
    }
};
//////////////////////////////////////////////////////////////////////

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends
