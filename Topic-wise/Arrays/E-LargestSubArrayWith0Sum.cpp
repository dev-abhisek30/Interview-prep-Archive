//https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int ans=0;
        for(int i=0;i<n;i++){
            int sum = A[i];
            int t = 0;
            for(int j=i+1;j<n;j++){
                sum += A[j];
                if(sum == 0)
                    t = j;
            }
            if(ans<t)
                ans = t;
        }
        return ans;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}