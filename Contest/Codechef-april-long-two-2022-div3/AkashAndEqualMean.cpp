//https://www.codechef.com/APRIL222C/problems/CHFMIST
#include<bits/stdc++.h>
using namespace std;

int solution(vector<long long> arr,long long sum,long long mean){
    int ans=0;
    long long s = arr.size();
    for(long long i=0;i<s;i++){
        for(long long j=i+1;j<s;j++){
            //cout<<arr[i]<<"-arr[i]"<<arr[j]<<"-arr[j]"<<endl;
            long long sum1 = sum - arr[i] - arr[j];
            long long mean1 = sum1/(s-2);
            //cout<<sum1<<","<<mean1<<endl;
            if(mean == mean1){
                ans++;
                //cout<<mean<<""<<mean1<<endl;
            }
        }
    }
    return ans;
}

int main(){
    int t=0;
    cin>>t;
    while(t--){
        long long size = 0;
        cin>>size;
        vector<long long> arr;
        long long sum = 0;
        for(long long i=0;i<size;i++){
            long long k;
            cin>>k;
            sum += k;
            arr.push_back(k);
        }
        long long mean = sum/arr.size();
        cout<<solution(arr,sum,mean)<<endl;
    }
    return 0;
}