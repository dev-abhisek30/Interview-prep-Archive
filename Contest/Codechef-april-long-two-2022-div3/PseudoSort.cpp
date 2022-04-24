//https://www.codechef.com/APRIL222C/problems/PSEUDOSORT
#include<bits/stdc++.h>
using namespace std;

void solution(){

}

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int size=0;
        cin>>size;
        vector<int> arr;
        int ans =0;
        for(int i=0;i<size;i++){
            int k=0;
            cin>>k;
            arr.push_back(k);
            if(i==0){

            }else if(i==size-1){
                if(arr[i-1]>arr[i])
                    ans = 2;
            }else{
                if(arr[i-1]>arr[i])
                    ans++;
            }
        }
        if(ans > 1)
            cout<<"NO"<<endl;
        else    
            cout<<"YES"<<endl;
    }
    return 0;
}