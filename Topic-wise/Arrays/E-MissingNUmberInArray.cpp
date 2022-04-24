//https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        vector<int> arr(n,0);
        int ans=0;
        for(int i=0;i<array.size();i++){
            int t = array[i] - 1;
            arr[t] = arr[t]+1;
        }
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                ans=i+1;
                break;
            }
        }
        
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
} 
