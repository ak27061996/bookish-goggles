#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;
ll powM(ll a,ll b){ll rs=1;while(b>0){if(b&1){b=b-1;rs=rs*a %M;}else {b=b/2;a=a*a%M;} }return rs;}
ll inv(ll x){
    return powM(x,M-2);
}
ll fun1(ll k,ll n){
    ll r=log(n*(k-1)+1)/log(k);
    ll xx=(k-1)*(k-1)%M;
    ll cc=(k*(powM(k,r)-1) % M - (k-1)*r%M+M)%M;
    return cc*inv(xx) % M;
}

ll simplestSum(ll k,ll a,ll b) {
   ll r1=log(a*(k-1)+1)/log(k);
   ll r2=log(b*(k-1)+1)/log(k);
   //cout<<r1<<" =r1 r2= "<<r2<<endl;
   if(r1==r2){
    return (b-a+1)*fun1(k,a)%M;
   }
   // ll x=pow(k,r1+1)/(k-1);
    ll rs=0;
   for(int i=r1;i<r2;i++){
       ll x=(pow(k,i+1)-1)/(k-1);
       //cout<<x<<" "<<fun1(k,a)<<endl;
       rs=(rs+fun1(k,a)*(x-a)%M)%M;
       a=x;
   }
   ll x=(pow(k,r2)-1)/(k-1);
   rs=(rs+fun1(k,b)*(b-x+1)%M)%M;
   //cout<<x<<" "<<fun1(k,b)<<endl;
  return rs;
}
int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        ll k;
        ll a;
        ll b;
        //cin>>k>>a;
        cin >> k >> a >> b;
        //cout<<brute(k,a,b)<<endl;
        ll result = simplestSum(k, a, b);
       cout << result << endl;
    }
    return 0;
}