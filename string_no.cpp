#include <bits/stdc++.h>
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
	int t;
	for (cin>>t;t--;)	{
		string s;
		cin>>s;
		vector<int> v[26];
		for(int i=0;i<s.length();i++){
			for(int j=0;j<26;j++){
				if(j>=s[i]-'a')
					continue;
				v[j].push_back(i);
			}
		}
		// for(int i=0;i<26;i++){
		// 	for(int j=0;j<v[i].size();j++){
		// 		cout<<v[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		ll rs=0,rs1=0,cnt=0;

		int jj=-1;
		ll mi=0;
		
		vector<pair<ll,ll > > mg(s.length());
		for(int i=0;i<s.length();i++){
			int x=lower_bound(v[s[i]-'a'].begin(), v[s[i]-'a'].end(),i)-v[s[i]-'a'].begin();
			ll cc=(v[s[i]-'a'].size()-x);
			ll gre=LLONG_MAX;
			

			for(int j=0;j<26;j++){
				if(s[i]-'a'!=j){
					int x=lower_bound(v[j].begin(), v[j].end(),i)-v[j].begin();
					ll xx=abs(s[i]-'a'-j) + (v[j].size()-x);
					gre=min(gre,xx);
				}
				
			}


			mg[i].ff=cc;
			mg[i].ss=gre;
			rs=rs+cc;
			if(cc-gre>0){
				// mi=max(mi,)
				if(mi<cc-gre){
					jj=i;
					mi=cc-gre;
				}
			}
			// cout<<cc<<" "<<gre<<" "<<mi<<" "<<jj<<endl;
		}

	if(jj!=-1){
		rs=rs-mi;
	}	
    cout<<rs<<endl;

	}
}