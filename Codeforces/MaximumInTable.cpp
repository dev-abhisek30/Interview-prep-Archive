//https://codeforces.com/problemset/problem/509/A
#include<bits/stdc++.h>
using namespace std;

int solution(int t){
    int arr[t][t];
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(i==0 || j==0)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i-1][j]+arr[i][j-1];
        }
    }
    return arr[t-1][t-1];
}

int main(){
    int t=0;
    cin>>t;
    cout<<solution(t)<<endl;
    return 0;
}