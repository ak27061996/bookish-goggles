#include <bits/stdc++.h>
#define ll long long
#define ps push_back
#define F first
#define S second
#define mp make_pair
using namespace std;
int main()
{
   int t;
   for(cin>>t;t--;){
    ll n;
    cin>>n;
    unsigned int a[n+3];
    ll x=(1LL<<32)/n;
    ll rem =(1LL<<32)%n;
    
    for(ll i=0;i<n;i++){
      a[i]=x;
    }
    a[0]=0;
   a[n-1]+=rem;

 cout<<n<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" "<<i<<endl;;
    cout<<endl;

   }
    return 0;
}
