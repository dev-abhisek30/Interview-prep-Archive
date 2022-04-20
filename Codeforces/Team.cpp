//https://codeforces.com/problemset/problem/231/A
#include<bits/stdc++.h>
using namespace std;

int solution(int n){
    int ans=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<3;j++){
            int t;
            cin>>t;
            count += t;

        }
        if(count>=2)
            ans++;
    }
    return ans;
}

int main(){
    int n=0;
    cin>>n;
    cout<<solution(n)<<endl;
    return 0;
}