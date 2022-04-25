//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int ans =0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(k == arr[i]+arr[j]){
                    ans++;
                }
            }
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}