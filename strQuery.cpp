#include <bits/stdc++.h>
#define ll long long
#define ps push_back
#define F first
#define S second
#define mp make_pair
template<class T>T max(T a,T b){return a>b?a:b;}
template<class T>T min(T a,T b){return a<b?a:b;}
ll gcd(ll a,ll b){return b==0?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return (a*(b/gcd(a,b)));}
using namespace std;
struct node{
    ll I;
    ll pos; /// start of pos
};
node arr[100000];
char crr[100010];
ll val[100010];
ll prr[100010];
ll n,len;
void MP(){
    ll vark = 0;
    for(int i =0; i < n; i++){
        ll pos = val[i];
        if(pos < 0) pos = -pos;
        if(val[i] >= 0){
            arr[i].I = vark;
            arr[i].pos = 0;
            vark += (pos+1);
        }
        else{
            arr[i].I = vark;
            arr[i].pos = pos;
            vark += (len-1-pos+1);
        }
    }
    arr[n].I = vark;
    arr[n].pos = -1;
    for(int i = 0; i < n; i++){
        prr[i] = arr[i].I;
        //cout<<arr[i].I<<" .";
    }
}
char query(ll k){
    if(arr[n-1].I <= k) return crr[arr[n-1].pos+(k-arr[n-1].I)];
    int index = lower_bound(prr,prr+n,k)-prr;
    if(prr[index] > k) index--;
    //cout<<index<<" "<<prr[index]<<" "; cout<<crr<<"...";
    return crr[arr[index].pos+(k-arr[index].I)];
}
int main()
{
   cin>>crr; len = strlen(crr);   cin>>n; for(int i = 0; i < n; i++) cin>>val[i];   MP();
   int q; ll k;
   cin>>q;
   while(q--){
        cin>>k;
        if(arr[n].I < k) cout<<"-1\n";
        else cout<<query(k-1)<<"\n";
   }
    return 0;
}
