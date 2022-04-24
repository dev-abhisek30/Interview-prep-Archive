//https://www.codechef.com/APRIL222C/problems/CHEAPFOOD
#include<bits/stdc++.h>
using namespace std;

int solution(int x){
    int ans=0;
    int discount = (x *10)/100;
    //cout<<discount<<"-------"<<endl;
    return (discount>100)?discount:100;
}

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int x=0;
        cin>>x;
        cout<<solution(x)<<endl;
    }
    return 0;
}