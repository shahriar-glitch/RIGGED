#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        long long n,sum=0;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        long long s= floor(sqrt(sum));
        long long as= s*s;
        if(as==sum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}