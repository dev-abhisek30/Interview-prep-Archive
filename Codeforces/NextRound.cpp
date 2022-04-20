//https://codeforces.com/problemset/problem/158/A
#include<bits/stdc++.h>
using namespace std;

int solution(int n,int k, vector<int> arr){
    int ans=0;
    int cmp = arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=cmp && arr[i]>0){
            ans++;
        }
    }
    return ans;
}

int main(){
    int n,k=0;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int t=0;
        cin>>t;
        arr.push_back(t);
    }
    cout<<solution(n,k,arr)<<endl;
    return 0;
}