//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

//User function Template for C++

class Solution{   
public:
    pair<int, int> get(int a, int b){
        //complete the function here
        pair<int, int> ans;
        int temp = a;
        a = b; 
        b = temp;
        ans.first = a;
        ans.second = b;
        return ans;
    }
};


//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        
        Solution ob;
        pair<int, int>p = ob.get(a, b);
        cout << p.first << ' ' << p.second << endl;
    
    
cout << "~" << "\n";
}
    return 0; 
} 

// } Driver Code Ends