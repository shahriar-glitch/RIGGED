#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[101]={0};
    int n;
    cin>>n;

    int m;
    for(int i=0;i<n;i++){
        cin>>m;
        arr[m]++;
    }
    int mx=1;
    for(int i=1;i<=100;i++){
        if(arr[i]>mx) mx = arr[i];
    }
    cout<<n-mx<<endl;
    
    return 0;
}