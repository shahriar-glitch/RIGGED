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
    int h=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            h=arr[i];
            cout<<h<<endl;
            return 0;
        }
        
    }
    cout<<arr[n-1]<<endl;
    
    return 0;
}