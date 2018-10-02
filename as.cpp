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

string myToString(ll n){   //inbuilt function for this is = to_string(n);
ostringstream s; s<<n;return s.str();} 
void swapp(void *a ,void *b){
    void *s=a;
    a=b;
    b=s;
}
int main()
{
    int a=2,b=3;
swapp(a,b);
cout<<a<<" "<<b;	
//     string s;
//     int n;cin>>n;
//     cin>>s;
//     int up=0;
//     bool rs=1;
//     int ii=-1,jj=-1;
//     for(int i=1;i<s.length();i++){
//     	if(s[i]==s[i-1]&&s[i]!='?'){
//     		//cout<<i<<" ";
//     		rs=0;break;
//     	}
//     	// if(s[i]=='?'){
//     	// 	if(ii==-1){
//     	// 	ii=i;
//     	//    }
//     	// 	if(s[i-1]==s[i+1]&&s[i]!='?'){
//     	// 		rs=0;break;
//     	// 	}	
//     	// }
//     	// else{
//     	//    	 int cn=i-ii;
//     	//    	 if(ii!=-1&&s[ii-1]==s[i]&&cn%2==0){
//     	//    	 	rs=0;break;
//     	//    	 }
//     	//    	 if(ii!=-1&&s[ii-1]==s[i]&&cn%2!=0){
//     	//    	 	rs=0;break;
//     	//    	 }
//     	//    	 ii=-1;
//     	  // }	
//     }
// if(rs) cout<<"Yes\n";
// else cout<<"No\n";



}
