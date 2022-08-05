//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int Xor=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            Xor^=nums[i];
        }
        int right_most_set_bit=Xor&~(Xor-1);
        int x=0,y=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&right_most_set_bit)
            {
                x=x^nums[i];
            }
            else
            {
                y=y^nums[i];
            }
        }
        if(x<y)
        {
            return {x,y};
        }
        return {y,x};
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends