//https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1/
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> ans(n,0);
        vector<int> ans1;
        for(int i=0;i<n;i++){
            ans[arr[i]]++;
        }
        int a =0 ;
        for(int i=0;i<n;i++){
            if(ans[i]>=2){
                ans1.push_back(i);
                a = 1;
            }
        }
        
        if(a==1){
            return ans1;
        }else{
            ans1.push_back(-1);
            return ans1;
        }
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends