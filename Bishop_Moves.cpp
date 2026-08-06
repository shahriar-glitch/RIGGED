#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    while(n--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int case1=(x1+y1)%2;
        int case2=(x2+y2)%2;
        int case3=abs(y1-x1);
        int case4=abs(y2-x2);
        if(case3==case4) cout<<"1"<<endl;
        else if(case1!=case2) cout<<"-1"<<endl;
        else cout<<"2"<<endl;
    }

    return 0;
}