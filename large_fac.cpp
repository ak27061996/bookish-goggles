#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz(s) (int)s.size()
#define bitcount __builtin_popcount
#define all(v) v.begin(),v.end()
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define M 1000000007
#define PI acos(-1)
ll gcd(ll a,ll b){return (b==0?a:gcd(b,a%b));}
ll pow_(ll a,ll b,ll m){ll res=1;while(b){if(b&1)res=(res*a)%m;a=(a*a)%m;b>>=1;}return res;}

string myToString(ll n){   //inbuilt function for this is = to_string(n);
ostringstream s; s<<n;return s.str();} 
int main()
{
int t;
for(cin>>t;t--;){
	ll n;cin>>n;
	ll rs=1,cnt=0;
	for(ll i=1;i<=n;i++){
		rs=rs*i;
		// int l = myToString(rs).length();
		rs=rs%10000000;
		// int r =myToString(rs).length();
		//cnt=cnt+abs(l-r);
    }
    cout<<myToString(rs)[0]<<" "<<(cnt+myToString(rs).length()-1)<<endl;
}	
	//boost();
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	//#endif
}