//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> duplicates(vector<int> arr) {
        vector<int>ans;
        int a=INT_MIN;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1] && a!=arr[i]){
                ans.push_back(arr[i]);
                a=arr[i];
            }
            
        }
        if(ans.size()==0){
            ans.push_back(-1);
        }
        return ans;
        // code here
    }
};


//{ Driver Code Starts.

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    vector<int> ans = obj.duplicates(arr);
    for (int i : ans)
        cout << i << ' ';
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}

// } Driver Code Ends