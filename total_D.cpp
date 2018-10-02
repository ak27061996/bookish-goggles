#include<bits/stdc++.h>
#define ll long long
ll fnVal[2000006];
ll comm[2000006];
ll ans[1000006];
ll count_diamond(ll x){
    ll sn=0,sp=0;
    while(x>0){
        int a=x%10;
        x=x/10;
        if(a&1) sn=sn+a; 
        else sp=sp+a;
       
    }
    return abs(sp-sn);
}
ll fn(ll n){
    ll rs=0;
    for(ll i=2,cn=1,increment=1;i<=2*n;i++){
        rs=rs+count_diamond(i)*cn;
        if(cn==n)  increment= -1;
        cn+=increment;
    }
    return rs;
}
using namespace std;
int main(){
    int t;
    fnVal[0]=0,fnVal[1]=2;
    comm[0]=0,comm[1]=2;
    for(ll i=2;i<=2000004;i++){
        fnVal[i]=count_diamond(i);
        comm[i]=comm[i-1]+fnVal[i];
    }
    for(int i=1;i<=1000002;i++){
        ans[i]=ans[i-1]+2*(comm[2*i-1]-comm[i])+count_diamond(2*i);
    }
    for(cin>>t;t--;){
          ll n;
          cin>>n;
        //  cout<<fn(n)<<endl;
        cout<<ans[n]<<endl;
    }
}