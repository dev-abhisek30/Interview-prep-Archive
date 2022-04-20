//https://codeforces.com/problemset/problem/1385/A
#include<bits/stdc++.h>
using namespace std;

void solution(int x,int y,int z){
    if(x>y)
        swap(x,y);
    if(x>z)
        swap(x,z);
    if(y>z)
        swap(y,z);

    if(y!=z)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl<<x<<" "<<x<<" "<<z<<endl;
    
}

int main(){
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y,z=0;
        cin>>x>>y>>z;
        solution(x,y,z);
    }
    return 0;
}