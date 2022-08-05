//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    int countSetBits(int n)
    {
        n=n+1;
        int poweroftwo=1;
        int cnt=0;
        while(poweroftwo<=n)
        {
            int totalgrps=n/(poweroftwo);
            if(totalgrps&1)
            {
                cnt+=(totalgrps/2)*poweroftwo+(n%poweroftwo);
            }
            else
            {
                cnt+=(totalgrps/2)*poweroftwo;
            }
            poweroftwo=poweroftwo<<1;
        
        }
        return cnt;
        
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends