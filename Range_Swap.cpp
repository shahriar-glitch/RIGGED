#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,p,q,r,s;
    cin>>n>>p>>q>>r>>s;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=p-1;i++){
        cout<<arr[i];
        if(i<=n) cout<<" ";
        else cout<<endl;
    }
    for(int i=r;i<=s;i++){
        cout<<arr[i];
        if(i<=n) cout<<" ";
        else cout<<endl;
    }
    for(int i=q+1;i<=r-1;i++){
        cout<<arr[i];
        if(i<=n) cout<<" ";
        else cout<<endl;
    }
    for(int i=p;i<=q;i++){
        cout<<arr[i];
        if(i<=n) cout<<" ";
        else cout<<endl;
    }
    for(int i=s+1;i<n+1;i++){
        cout<<arr[i];
        if(i<=n) cout<<" ";
        else cout<<endl;
    }

    return 0;
}