#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,l,r;
    cin>>n>>l>>r;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=l){
            cout<<l;
        }
        else if(arr[i]>=r){
            cout<<r;
        }
        else if(arr[i]>l && arr[i]<r){
            cout<<arr[i];
        }
        if(i<n) cout<<" ";
    }
    cout<<endl;

    return 0;
}