#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,d,r;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int w=0;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]<=d){
            w=1;
            r=arr[i+1];
            break;
        }
        else{
            w=0;
        }
    }
    if(w==1) cout<<r<<endl;
    else cout<<"-1"<<endl;

    

    return 0;
}