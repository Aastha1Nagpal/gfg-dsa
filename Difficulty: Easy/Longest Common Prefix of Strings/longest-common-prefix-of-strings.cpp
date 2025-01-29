//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
       string sortstr = arr[0];
        
        for(int i=0;i<arr.size();i++){
            string str = arr[i];
            if(str.size()<sortstr.size()){
                sortstr = str;
            }
        }
        string prefix = "";
        for(int i=0;i<sortstr.size();i++){
            char chari = sortstr[i];
            for(auto str : arr){
                if(str[i]!=chari){
                    return prefix;
                }
            }
            prefix += chari;
        }
        return prefix;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        string ans = ob.longestCommonPrefix(arr);
        if (ans.empty())
            cout << "\"\"";
        else
            cout << ans;
        cout << endl;
    }
}

// } Driver Code Ends