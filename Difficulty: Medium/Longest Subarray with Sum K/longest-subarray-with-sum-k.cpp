//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> map;
        int n = arr.size();
        int prefSum = 0;
        int len = 0;
        for(int i = 0; i<n; ++i){
            prefSum += arr[i];
            
            if(prefSum == k){
                len = i+1;
            }
            else if(map.find(prefSum - k) != map.end()){
                len = max(len, i - map[prefSum - k]);
            }
            if(map.find(prefSum) == map.end()){
                map[prefSum] = i;
            }
            
        }
        return len;
    }
};
    

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends