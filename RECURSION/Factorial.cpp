// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends

/////////////////////////////////////////////////////////////////////
class Solution{
public:
    long long int factorial(int N){
        if(N==0 || N==1){
            return 1;
        }
        
        long long partialAns = factorial(N-1);
        long long ans = N * partialAns;
        return ans;
        
    }
};
//////////////////////////////////////////////////////////////////

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
