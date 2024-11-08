//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);


// } Driver Code Ends
/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        string num = to_string(n);
        for(int i = 0; i<num.length(); i++){
            if(num[i] == '0'){
                num[i] = '5';
            }
        }
        int m = stoi(num);
        return m;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.convertFive(n) << endl;
    }
}
// } Driver Code Ends