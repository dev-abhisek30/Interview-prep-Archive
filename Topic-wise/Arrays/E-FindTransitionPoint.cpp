//https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1/

#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}


int search(int arr[],int l,int r){
    while(l<=r){
        int mid = (l+r)/2;
        //cout<<mid<<","<<l<<","<<r<<endl;
        if((arr[mid] == 1) && (arr[mid-1] == 0)){
            return mid;
        }else if(arr[mid] == 0){
            l = mid+1;
        }else{
            r = mid-1;
        }
    }
    return -1;
}
int transitionPoint(int arr[], int n) {
    // code here
    return search(arr,0,n-1);
}