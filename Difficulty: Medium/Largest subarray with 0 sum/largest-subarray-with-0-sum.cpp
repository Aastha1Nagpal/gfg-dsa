//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here
        int sum =0;
        int n = arr.size();
        map<int ,int > mpp;
        int maxl=0;
        int x=0;
        for(int i =0;i<n;i++){
            
            sum+=arr[i];
            
            if(sum == 0){
                maxl = max(maxl, i+1);
            }
            int rem = sum-0;
            if(mpp.find(rem)!=mpp.end()){
                x=i - mpp[rem];
                maxl = max(maxl,x);
            }
            
            if(mpp.find(sum) == mpp.end())
            mpp[sum] = i;
            
            
        }
        
        return maxl;
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