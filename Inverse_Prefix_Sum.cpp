#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arr[0]<<" ";
    for(int i=0;i<n-1;i++){
        cout<<arr[i+1]-arr[i];
        if(i<n) cout<<" ";
    }
    cout<<endl;

    return 0;
}