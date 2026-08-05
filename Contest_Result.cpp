#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int x;
    int ans=0;
    for(int i=1;i<=m;i++){
        cin>>x;
        ans += arr[x];
    }
    cout<<ans;
    return 0;
}