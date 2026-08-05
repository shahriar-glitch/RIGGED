#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int cnt[100001]={0};
    int n;
    cin>>n;
    int x;
    for(int i=0;i<4*n-1;i++){
        cin>>x;
        cnt[x]++;
    }
    int ans;
    for(int i=1;i<=n;i++){
        if(cnt[i]!=4) ans=i;
    }
    cout<<ans<<endl;

    return 0;
}