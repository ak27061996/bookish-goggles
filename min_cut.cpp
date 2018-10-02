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
#define MOD 1000000007
#define PI acos(-1)
ll gcd(ll a,ll b){return (b==0?a:gcd(b,a%b));}
ll pow_(ll a,ll b,ll m){ll res=1;while(b){if(b&1)res=(res*a)%m;a=(a*a)%m;b>>=1;}return res;}
string myToString(long long n){   //inbuilt function for this is = to_string(n);
ostringstream s; s<<n;return s.str();
} 
int main()
{	
	boost();
	#ifndef ONLINE_JUDGE
	freopen("input.txt.txt","r",stdin);
	freopen("output.txt.txt","w",stdout);
	#endif
}