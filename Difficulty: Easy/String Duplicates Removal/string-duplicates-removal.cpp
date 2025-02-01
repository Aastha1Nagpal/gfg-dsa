//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        unordered_set<char> str;
        int n = s.length();
        string res = "";
        for(auto i: s){
            if(str.find(i) == str.end()){
                str.insert(i);
                res.push_back(i);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends