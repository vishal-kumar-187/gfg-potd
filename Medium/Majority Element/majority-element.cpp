//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int majorityElement(int a[], int size) {
        int majority = -1;
        int count = 0;
        
        for (int i = 0; i < size; i++) {
            if (count == 0) {
                majority = a[i];
                count = 1;
            } else {
                if (a[i] == majority) {
                    count++;
                } else {
                    count--;
                }
            }
        }
        
        count = 0;
        for (int i = 0; i < size; i++) {
            if (a[i] == majority) {
                count++;
            }
        }
        
        if (count > size / 2) {
            return majority;
        } else {
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends