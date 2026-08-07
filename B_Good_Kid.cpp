#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,ans=1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        arr[0]=arr[0]+1;
        for(int i=0;i<n;i++){
            ans *= arr[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}