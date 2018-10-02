

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
int getGroup(ll r,ll n,ll i){
	ll x=(1<<r)/(1<<i);
	return ceil(n/x);
}

// 0-0
// 1-01
// 2-0110
// 3-01101001
// 4-0110100110010110
// 5-01101001100101101001011001101001

bool fun(char c,ll r){
	string s1,s0,s=c;
	 s1= "10";
	 s0= "01";
	ll n=ceil(log2(r));
	int i=0;
	while(i++<=n){
		for(int i=0;i<s,length();i++){
		if(s[i]=='0') s=s+s0;
		else s=s+s1;
	    }
    }

	
}
int main()
{	
	// vector<string> v[2];
	// v[0].pb("0");
	// v[1].pb("1");
	// for(int i=1;i<=20;i++){
	// 	string s="",s1="";
	// 	for(int j=0;j<v[0][i-1].length();j++){
	// 	    cout<<v[0][i-1].length()<<" df \n";
	// 		if(v[0][i-1][j]=='0')
// 				s=s+"01";
// 			else
// 				s=s+"10";
// 		}
// 		for(int j=0;j<v[1][i-1].length();j++){
// 			if(v[1][i-1][j]=='0')
// 				s1=s1+"01";
// 			else
// 				s1=s1+"10";
// // 		}
// 		cout<<s<<" ";
// 		v[0].push_back(s);
// 		//v[1].push_back(s1);
	// }
	int t;for(cin>>t;t--;){
	ll n,r;
	string s;
	cin>>s;
	cin>>r>>n;
	ll ind = n/(1<<r);
	ll rem=n%(1<<r);
	cout<<fun(s[ind],rem)<<endl;
	//if(s[ind]==0){
		//cout<<v[(int)s[ind]-'0'][r][rem]<<endl;
	//}
    }

}




















