//http://codeforces.com/problemset/problem/903/D
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
	int t=30;
	for(;t--;){
		int n;cin>>n;
		vector<int> v(n),b(n);
		for(int i=0;i<n;i++){ 
			cin>>v[i];
			b[i].ff=v[i];
			b[i].ss=i;
		}
		sort(all(v));
		sort(all(b));	
	ll rs=0;
	ll s[n];
	s[-1]=0;
	for(int i=0;i<n;i++) s[i]=s[i-1]+v[i];

	for(int i=0;i<n;i++){
		int ii=lower_bound(all(v),v[i]+2)-v.begin();
		if(abs(v[i]-v[ii])>1){
		cout<<ii<<"=ii v[i]= "<<v[i]<<" s[ii-1]= "<<s[ii-1]<<"  res= "<<(v[i]*(n-ii)-(s[n-1]-s[ii-1]))<<" \n";
		rs=rs+(v[i]*(n-ii)-(s[n-1]-s[ii-1]));
	    }
	    else{
	    	cout<<0<<" ii="<<v[ii]<<" "<<v[i];
	    }
	}
	cout<<rs<<endl;


	}
}

