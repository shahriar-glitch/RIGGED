#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    int arr[101];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-m;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-m;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}