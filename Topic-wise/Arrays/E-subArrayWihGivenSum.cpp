//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> subArrayIndex;
        //my wrong approach
        /* vector<long long> prefixSum(n,0);
            for(int index=0;index<n;index++){
            if(index == 0)
                prefixSum[index] = prefixSum[index] + arr[index];
            else
                prefixSum[index] = prefixSum[index-1] + arr[index];
            cout<<prefixSum[index]<<endl;
            
            if(prefixSum[index] == s){
                subArrayIndex.push_back(1);
                subArrayIndex.push_back(index+1);
                break;
            }
            if(prefixSum[index] > s){
                long long diff = prefixSum[index] - s;
                //cout<<diff<<endl;
                auto it = find(prefixSum.begin(),prefixSum.end(),diff);
                if(it!=prefixSum.end()){
                    int t = (it-prefixSum.begin())+2;
                    //cout<<t<<endl;
                    subArrayIndex.push_back(t);
                    subArrayIndex.push_back(index+1);
                }else{
                    subArrayIndex.push_back(-1);    
                }
                break;
            }
        } */
        int sum = arr[0],start =0;
        bool found = false;
        for(int index = 1;index<=n;index++){

            while(sum > s && start < index -1){
                sum -= arr[start];
                start++;
            }

            if(sum ==s){
                subArrayIndex.push_back(start+1);
                subArrayIndex.push_back(index);
                found = true;
                break;
            }

            if(index<n){
                sum += arr[index];
            }
        }

        if(!found){
            subArrayIndex.push_back(-1);
        }
        return subArrayIndex;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends

/* 
42 468
135 101 170 125 79 159 163 65 106 146 82 28 162 92 196 143 28 37 192 5 103 154 93 183 22 117 119 96 48 127 172 139 70 113 68 100 36 95 104 12 123 134
 */