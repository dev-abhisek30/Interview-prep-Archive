//https://codeforces.com/problemset/problem/282/A
#include<bits/stdc++.h>
using namespace std;

int solution(int n){
    int ans=0;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        int l = str.length()-1;
        if(str[0] == '+')
            ans++;
        if(str[0] == '-')
            ans--;
        if(str[l]=='+')
            ans++;
        if(str[l]=='-')
            ans--;
    }
    return ans;
}

int main(){
    int n=0;
    cin>>n;
    cout<<solution(n)<<endl;
    return 0;
}