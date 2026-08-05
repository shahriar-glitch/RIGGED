#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        if(n<=3) cout<<n*x<<endl;
        else{
            cout<<(x*3)+(n-3)*y<<endl;
        }
    }

    return 0;
}