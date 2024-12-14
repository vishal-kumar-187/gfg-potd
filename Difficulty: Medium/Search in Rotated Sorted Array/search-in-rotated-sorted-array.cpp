//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // complete the function here
        
        int n = arr.size();
        int low = 0, high = n-1;

        while(low <= high){
            int mid = low + (high - low)/2;
            //first trim down the search space to remove duplicetes;
            if (arr[mid] == key){
                return mid;
            }
            if(arr[low] == arr[mid] && arr[mid] == arr[high]){
                low++, high--;
                continue;
            }
            //search for the sorted portion
            if(arr[low] <= arr[mid]){//left half is sorted
                if(arr[low] <= key && key < arr[mid]){
                    high = mid - 1;
                }
                else
                    low = mid + 1;
            }
            else{//right half is sorted
                if(arr[mid] < key && key <= arr[high]){
                    low = mid + 1;
                }
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends