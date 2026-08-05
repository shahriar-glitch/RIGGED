#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x,ans=0;
    cin>>n;
    for(int i=1;i<=7*n;i++){
        cin>>x;
        ans += x;
        if(i%7==0){
            cout<<ans<<" ";
            ans=0;
        }
    }

    return 0;
}