#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end() 
#define ll  long long
#define M 1000000007
void fast_fib(ll n,ll *ans)
{
    ll a1,b1,c1,d1;
    if(n == 0)
    {
        ans[0] = 0;
        ans[1] = 1;
        return;
    }
    fast_fib((n/2),ans);
    a1 = ans[0];             /* F(n) */
    b1 = ans[1];             /* F(n+1) */
    c1 = 2*b1 - a1;
    if(c1 < 0)
        c1 += M;
    c1 = (a1 * c1) % M;      /* F(2n) */
    d1 = (a1*a1%M + b1*b1%M) % M;  /* F(2n + 1) */
    if(n%2 == 0)
    {
        ans[0] = c1;
        ans[1] = d1;
    }
    else
    {
        ans[0] = d1;
        ans[1] = (c1+d1)%M;
    }
}

ll fib(ll n){
    ll ans[2]={0};
    fast_fib(n,ans);
    return ans[0];
}
void brute(ll *a,ll *b,ll m,ll n ){
    ll rs=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            ll f[n];
            f[1]=a[i];
            f[2]=b[j];
            for(int k=3;k<=n;k++){
                f[k]=(f[k-1]+f[k-2])%M;
            }
            rs=(rs+f[n])%M;
        }
    }
    cout<<"\n brute= "<<rs<<"\n ";
}
int main() {
    int t;
     // ll fib[100003];
     // fib[1]=0;fib[2]=1;
     //s for(int i=3;i<100003;i++) fib[i]=(fib[i-1]+fib[i-2])%M;
    for(cin >> t;t--;){
        ll n,m;
        cin>>m>>n;
       // cout<<fib(n)<<"\n";continue;
      //  ll a[m],b[m];
        ll sb=0,sa=0;
        for(int i=0;i<m;i++){
            ll x;
            cin>>x;
            sa=(sa+x)%M;
        }
        for(int i=0;i<m;i++){
            ll y;
            cin>>y;
            sb=(sb+y)%M;
        }
       // brute(a,b,m,n);
    ll  rs =(m*(((sa*fib(n-2))%M + (sb*fib(n-1))%M)%M)) %M;
    cout<<rs<<endl;
    }   
    return 0;
}