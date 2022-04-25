//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        vector<int> arr(3,0);
        for(int i=0;i<n;i++){
            arr[a[i]]++;
        }
        //cout<<arr[0]<<","<<arr[1]<<","<<arr[2]<<endl;
        int j = 0,i=0;
        while(j<3){
            while(arr[j]!=0){
                a[i] = j;
                arr[j]--;
                i++;
            }
            j++;
        }
    }   
    
};

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}