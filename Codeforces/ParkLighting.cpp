//https://codeforces.com/problemset/problem/1358/A
#include<bits/stdc++.h>
using namespace std;

void solution(int r, int c){
    int ans = (r*c);
    if(ans%2==0)
        cout<<ans/2<<endl;
    else
        cout<<(ans/2)+1<<endl;
}

int main(){
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int r,c=0;
        cin>>r>>c;
        solution(r,c);
    }
    return 0;
}