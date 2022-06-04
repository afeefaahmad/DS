// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
//////////////////////////////////////////////////////////////////////////
class Solution {
  public:
    long long int nthFibonacci(long long int n) {
        //Base Case1
        if (n==0){
            return 0;
        }
      //Base Case2
        if (n==1) {
            return 1;
        }
      //Recursive Call
        return nthFibonacci(n-1) + nthFibonacci(n-2);
    
       
    }
};

///////////////////////////////////////////////////////////////////////////

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
