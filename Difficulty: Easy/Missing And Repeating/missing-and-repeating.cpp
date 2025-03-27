//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        map<int, int> map;
        vector<int> vec;
        long long sum = 0;
        int n = arr.size();
        long long actualSum = 1LL*n*(n+1)/2;
        int dupli = -1;
        for(int i = 0; i<n; i++){
            sum += arr[i];
            if(map.find(arr[i]) != map.end()){
                dupli = arr[i];
            }
            map[arr[i]]++;
        }
        int smissing = actualSum - sum + dupli;
        vec.push_back(dupli);
        vec.push_back(smissing);
        return vec;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends