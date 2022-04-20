//https://codeforces.com/problemset/problem/4/A
#include<bits/stdc++.h>
using namespace std;
string solution(int w){
    //if w=2, edge-case as 1,1 is odd if divided equaly divided by2.
    return (w%2==0 && w!=2)?"YES":"NO";
}
int main(){
    int w=0;
    cin>>w;
    cout<<solution(w)<<endl;
    return 0;
}