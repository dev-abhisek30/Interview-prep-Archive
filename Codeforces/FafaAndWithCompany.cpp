//https://codeforces.com/problemset/problem/935/A
#include<bits/stdc++.h>
using namespace std;

int solution(int n){
    int ans=0;
    for(int i=1;i<=n-1;i++){
        if(i%(n-i)==0){
            ans++;
        }
    }
    return ans;
}

int main(){
    int n=0;
    cin>>n;
    cout<<solution(n)<<endl;
    return 0;
}