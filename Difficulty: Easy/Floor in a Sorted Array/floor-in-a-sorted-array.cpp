//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {
        // Your code here
        int n = arr.size();
        int l = 0;
        int r = n-1;
        int mid = l+(r-l)/2;
        while(l<=r){
            if(arr[mid]>k){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
            mid = l+(r-l)/2;
        }
        return r;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, k);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends