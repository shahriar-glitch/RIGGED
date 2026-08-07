#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,sum=0,ans;
    cin>>n;
    int arr[n];
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
        if(arr[i]/11<=i){
            sum+=arr[i]/11;
        }
        else{
            sum+=1;
        }
    }
    cout<<sum<<endl;

    return 0;
}