//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string reverseWords(string &s) {
        // code here
         string ans = "";
         stringstream ss(s);         
         string word;
    bool first = true;
    while (ss >> word) {
        // do something with each word
        reverse(word.begin(), word.end());
        if(first){
        ans = ans+ word;
            first = false;
        }
        else{
            ans = ans + " " + word;
        }
    }
return ans;
        
    }
};




//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        string str = s.substr(1, s.size() - 2);
        Solution obj;
        // Reverse the words in the string
        string ans = obj.reverseWords(str);
        cout << '"';
        cout << ans;
        cout << '"';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends