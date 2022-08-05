//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        int cnt=0,only=0,ans=0;
        while(N!=0)
        {
            cnt++;
            if(N&1)
            {
                only++;
                ans=cnt;
            }
            N=N>>1;
        }
        if (only==1)
        {
            return cnt;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends