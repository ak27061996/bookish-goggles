#include <bits/stdc++.h>
#define ll long long
using namespace std;

int int main(int argc, char const *argv[])
{
	int t;
	for (cin>>t;t--; ){
		ll n;
		cin>>n;

	}

	return 0;
}
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
//inbuilt function for this is = to_string(n);
vector <int> removeDuplicates(vector <int> vec){
	sort( vec.begin(), vec.end() );
vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
}
string myToString(ll n){ostringstream s; s<<n;return s.str();}
ll toInt(string s){ ll n=0; stringstream ss(s);ss>>n;return n;} 
int main()
{	
	//boost();
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	//#endif
}
