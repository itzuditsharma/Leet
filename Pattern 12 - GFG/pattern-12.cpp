//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i = 1; i <= n; i++){
            // left triangle 
            for(int j = 0; j < i; j++){
                cout<<j+1<<" ";
            }
            // spaces
            for(int j = 0; j < 2*((2*n)-(2*i)); j++){
                cout<<" ";
            }
            // Right triangle 
            for(int j = i ;j > 0; j--){
                cout<<j<<" ";
            }
            
            cout<<endl;
            
            
            
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends