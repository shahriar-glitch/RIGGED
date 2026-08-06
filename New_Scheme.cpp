#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[8],r=0,r1=0,r2=0;
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    for(int i=0;i<7;i++){
        if(arr[i+1]>=arr[i]) r=1;
        else{
            r=0;
            break;
        }
    }
    for(int i=0;i<8;i++){
        if(arr[i]>=100 && arr[i]<=675) r1=1;
        else{
            r1=0;
            break;
        }
    }
    for(int i=0;i<8;i++){
        if(arr[i]%25==0) r2=1;
        else{
            r2=0;
            break;
        }
    }
    if(r==1 && r1==1 && r2==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


    return 0;
}