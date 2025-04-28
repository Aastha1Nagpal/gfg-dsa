//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        stringstream ss(s);
        vector<string> words;
        string word;
        
        while(ss >> word){
            reverse(word.begin(), word.end());
            words.push_back(word);
        }
        string result = "";
        for(int i = 0 ; i<words.size(); i++){
            result += words[i];
            if(i != words.size()-1){
                result += " ";
            }
        }
        return result;
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