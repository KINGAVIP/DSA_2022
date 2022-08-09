//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void finder(int start,string output,vector<string>&ans,string s,int n)
	    {
	        if(start>=n)
	        {
	            if(output.size()>0)
	            {
	                ans.push_back(output);
	                
	            }
	            return;
	        }
	        finder(start+1,output,ans,s,n);
	        output.push_back(s[start]);
	        
	        finder(start+1,output,ans,s,n);
	           // output.pop_back();
	        
	        
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int i=0;
		    string output="";
		    vector<string>ans;
		    int n=s.size();
		    finder(i,output,ans,s,n);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends

/*using Bit Manipulation

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ans;
		    for(int i=0;i<(1<<s.size());i++)
		    {
		        string temp;
		        for(int j=0;j<s.size();j++)
		        {
		            if(i&(1<<j))
		            {
		                temp+=s[j];
		            }
		        }
		        if(temp.size()!=0)
		        {
		            ans.push_back(temp);
		        }
		    }
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends
