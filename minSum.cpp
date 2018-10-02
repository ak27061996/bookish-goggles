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

ll fun1(ll b,ll a,ll k){
	return abs(pow_(a-b,k,M)*pow_(a+b,k,M));
} 
int main()
{	
	//boost();
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	//#endif
	int t;
	for(cin>>t;t--;){
		ll n,k;
		cin >> n >> k;
		ll a[n];
		for(int i=0;i<n;i++) cin>>a[i];

		sort(a,a+n);
	 ll mn=LLONG_MAX;int ii=-1,jj=-1;
		for(int i=1;i<n;i++){
			//mn=min(mn,fun1(a[i-1],a[i]));
			ll fn=fun1(a[i-1],a[i]);
			if(mn>fn){
				mn=fn;
				//ii =i;jj=i-1;
			}

		}
		cout<<mn<<endl; 
	}
}