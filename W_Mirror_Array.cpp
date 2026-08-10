#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int m,n;
    cin>>n>>m;
    int arr[n][m];
    for(int i=1;i<=n;i++){
        for(int j=1;i<=m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=n;i>=1;i--){
        for(int j=m;j>=1;j--){
            cout<<arr[i][j];
        }
    }

    return 0;
}