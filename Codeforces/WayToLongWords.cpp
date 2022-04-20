//https://codeforces.com/problemset/problem/71/A
#include<bits/stdc++.h>
using namespace std;
string solution(string str){
    int len = str.length();
    if(len<=10){
        return str;
    }else{
        string i = to_string(len-2);
        return str[0]+i+str[len-1];
    }
}
int main(){
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string input;
        cin>>input;
        cout<<solution(input)<<endl;
    }
    return 0;
}