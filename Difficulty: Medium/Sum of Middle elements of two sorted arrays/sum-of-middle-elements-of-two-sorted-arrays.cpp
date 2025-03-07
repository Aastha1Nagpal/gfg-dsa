//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        vector<int> sun;
        for(int i = 0; i<arr1.size(); i++){
            sun.push_back(arr1[i]);
        }
        for(int i = 0; i<arr2.size(); i++){
            sun.push_back(arr2[i]);
        }
        sort(sun.begin(), sun.end());
        int n = sun.size();
        int s = 0; 
        int e = sun.size()-1;
        int mid = s+(e-s)/2;
        for(int i = 0; i<n; i++){
            return sun[mid]+sun[mid+1];
        }
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl << "~\n";
    }
}
// } Driver Code Ends