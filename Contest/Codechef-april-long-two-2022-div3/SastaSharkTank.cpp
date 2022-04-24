//https://www.codechef.com/APRIL222C/problems/SST
#include<bits/stdc++.h>
using namespace std;

string solution(int x,int y){
    int a = (x*100)/10;
    int b = (y*100)/20;
    if(a==b){
        return "ANY";
    }else if(a>b){
        return "FIRST";
    }else{
        return "SECOND";
    }
}

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int x,y=0;
        cin>>x>>y;
        cout<<solution(x,y)<<endl;
    }
    return 0;
}