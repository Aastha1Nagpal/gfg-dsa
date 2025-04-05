//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here
        int len = 0;
        int n = arr.size();
        int sum = 0;
        unordered_map<int, int> map;
        for(int i = 0; i<n; i++){
            sum += arr[i];
            if(sum == 0){
                len = 1+i;
            }
            if(map.find(sum-0) != map.end()){
                len = max(len, i - map[sum]);
            }
            else{
                map[sum] = i;
            }
        }
        return len;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.maxLen(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends