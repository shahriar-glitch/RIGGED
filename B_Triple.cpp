#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[200001]={0};
        int x;
        int ans = -1;
        for(int i=1;i<=n;i++){
            cin>>x;
            arr[x]++;
            if(arr[x]>=3){
                ans = x;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}