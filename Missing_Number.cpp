#include <bits/stdc++.h>
using namespace std;
int arr[200001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n-1;i++){
        cin>>x;
        arr[x]=1;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            cout<<i<<endl;
        }
    }
    return 0;
}