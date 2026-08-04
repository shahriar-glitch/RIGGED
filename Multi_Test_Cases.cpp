#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
           cin>>arr[i];
        }
        for(int i=0;i<n;i++){
           if(arr[i]%2!=0) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
