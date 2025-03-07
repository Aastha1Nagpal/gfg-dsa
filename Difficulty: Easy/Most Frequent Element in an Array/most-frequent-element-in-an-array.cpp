//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        // code here
        int n = arr.size();
        map<int,int> map;
        for(int i = 0; i<n; i++){
            map[arr[i]]++;
        }
        int max_freq = 0;
        int ans = -1;
        for(auto i:map){
            if(i.second> max_freq){
                max_freq = i.second;
                ans = i.first;
            }
            if(i.second == max_freq)
            ans = max(ans, i.first);
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
        vector<int> arr;
        string line;
        getline(cin, line);
        stringstream ss(line);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ele = ob.mostFreqEle(arr);
        cout << ele << endl;
    }
}
// } Driver Code Ends