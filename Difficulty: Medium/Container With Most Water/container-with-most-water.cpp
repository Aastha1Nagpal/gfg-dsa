//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
      int l = 0;
      int r = n-1;
      int maxArea = 0;
      while(l<r){
        int w = r-l;
        int h = min(arr[l], arr[r]);
        int area = h*w;
        if(arr[l]> arr[r]){
            r--;
        }
        else{
            l++;
        }
        maxArea = max(area, maxArea);
      }
      return maxArea;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends