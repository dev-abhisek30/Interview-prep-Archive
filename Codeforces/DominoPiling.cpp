//https://codeforces.com/problemset/problem/50/A
#include<bits/stdc++.h>
using namespace std;

int solution(int m,int n){
    return ((m*n)/2);
}

int main(){
    int m,n=0;
    cin>>m>>n;
    cout<<solution(m,n)<<endl;
    return 0;
}