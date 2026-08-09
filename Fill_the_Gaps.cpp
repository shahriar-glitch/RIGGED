#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arr[0]<<" ";
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>arr[i]){
            while(arr[i+1]>arr[i]){
                cout<<arr[i]+1<<" ";
                arr[i]=arr[i]+1;
            }
        }
        else if(arr[i+1]<arr[i]){
            while(arr[i+1]<arr[i]){
                cout<<arr[i]-1<<" ";
                arr[i]=arr[i]-1;
            }
        }
        else{
            cout<<arr[i+1]<<" ";
        }
    }

    return 0;
}