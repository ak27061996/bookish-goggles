#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
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
string myToString(ll n){ostringstream s; s<<n;return s.str();}
ll toInt(string s){ ll n=0; stringstream ss(s);ss>>n;return n;}
struct print{
	void Custom_print() { cout << "\n"; }  
	template <typename T, typename... Types> 
	void Custom_print(T var1, Types... var2) 
	{ 
		cout << var1 <<" " ; 
		Custom_print(var2...) ; 
	}
};
bool comp(pair<ll ,ll >&a,pair<ll ,ll >&b){
    return a.F<b.F;
}

int main()
{	
	//struct print P;
	// P.Custom_print(3,"adasd",123,"123234324");
	
	ll x,n,s;
    cin>>s>>x>>n;
    vector < pair<ll ,ll > > a(n);
    for(int i=0;i<n;i++) cin>>a[i].F>>a[i].S;
    sort(all(a),comp);
    int rs=0;
    // s=s-5*(a[i].F-1);
    for(int i=0;i<n;i++){
    	if(s-5*(a[i].F-1)>0){
    		rs=rs+a[i].F-1;
    		s=s-5*(a[i].F-1);
    		if(s!=0){
    			s=s-a[i].S;
    			rs++;
    			if(s<=0){
    				break;
    			}
    		}
    	}else{
    		rs=rs+ceil((float)s/5);
    	}
    }
    cout<<rs<<endl;
    
    
    return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}