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

int output(string s,int n){
int tb[n+1][n+1]={0};
for(int i=0;i<n;i++) tb[i][i]=1;
	int rs=0;
for(int i=2;i<=n;i++){
    for(int j=0;j<n-i+1;j++){
        if(s[j+i-1]==s[j]){
            //cout<<s.substr(j,i)<<endl;
            tb[j+i-1][j]=(tb[j+i-2][j+1]||(i==2));
            if(tb[j+i-1][j]) rs++;
        }
    }
}
return rs;	
} 
int main()
{	
	int t;
	for(cin>>t;t--;){
		int n;
		cin>>n;
		string s;
		cin>>s;
		cout<<output(s,n)<<endl;
	}
}