#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr,arr+3);
        if(arr[0]==arr[1] || arr[1]==arr[2] || arr[0]==arr[2]){
            cout<<"0"<<endl;
        }
        else{
            cout<<min(arr[2]-arr[1],arr[1]-arr[0])<<endl;
        }
    }

    return 0;
}