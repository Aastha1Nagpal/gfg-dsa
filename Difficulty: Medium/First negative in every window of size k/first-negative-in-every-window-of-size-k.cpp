//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        vector<int> vec;
        int n = arr.size();
        int l = 0;
        int r = k-1;
        while(r<n){
            bool found = false;
            for(int i = l; i<=r; i++){
                if(arr[i]<0){
                    vec.push_back(arr[i]);
                    found = true;
                    break;
                }
            }
            if(!found){
                vec.push_back(0);
            }
            l++;
            r++;
        }
        return vec;
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
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends