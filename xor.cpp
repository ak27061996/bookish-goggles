#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll n,q;
cin>>n>>q;
vector<ll >v(n);
for(int i=0;i<n;i++) cin>>v[i];
int xm=(int)sqrt(n);
int xn=ceil(sqrt(n));
vector<ll>cmx[xm];
for(int i=0;i<xm;i++){
    ll x=0;
    for(int j=0;j<xn&&i*j<=n;j++){
        x=x^v[i*xn+j];
        cmx[i].push_back(x);
    }
}
while(q--){
ll t,i,k;
cin>>t>>i>>k;
if(t==1){
     i--;
    int ii=i/xm;
    int jj=i%xm;
    k=v[i]^k;
    for(int ind=jj;ind<cmx[ii].size();ind++){
        cmx[ii][jj]=cmx[ii][jj]^k;
    }
}
else{
    int rs=0,w=0;
   for(int ii=0,iii=0,xx=0;ii<i;ii++){
        int n=cmx[xx].size();
        if(iii>=n){w=w^cmx[xx][n-1]; xx++;iii=0;}
        cout<<(cmx[xx][iii]^w)<<" ";
        if(cmx[xx][iii++]^w==k) rs++;

   }
   cout<<endl;
   cout<<rs<<endl;
}
}

}
