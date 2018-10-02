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

ll toInt(string s){
   ll n=0;
   stringstream ss(s);
   ss>>n;
   return n;
}
bool isPalindrome(ll n){
  string w,s=myToString(n);
    for(int i=0;i<s.length()/2;i++){
    if(s[i]!=s[s.length()-1-i]){
     return false;
    }
  }
  return true;
}
ll diff(ll a,ll b){
  return abs(a-b);
}
void fun(ll n){
  string w,s=myToString(n);
  w=s;
  bool f=0;
  for(int i=0;i<s.length()/2;i++){
  	if(s[i]!=s[s.length()-1-i]){
  		s[s.length()-1-i]=s[i];
  		f=1;
  	}
  }

  // number is already palindrome
  if(!f){
    if(s.length()%2==0){
        s[s.length()/2-1]=char(int(s[s.length()/2-1]-'0')-1+'0');
        s[s.length()/2] =char(int(s[s.length()/2]-'0')-1+'0');
    }
    else{
        s[s.length()/2] =char(int(s[s.length()/2]-'0')-1+'0');
    }
    // cout<<s<<"dg";
  }
  else{
    string r=s;
    if(s.length()%2==0){
        r[s.length()/2-1]=char(int(s[s.length()/2-1]-'0')-1+'0');
        r[s.length()/2] =char(int(s[s.length()/2]-'0')-1+'0');
        if(diff(toInt(s),n)>diff(toInt(r),n)){
          s=r;

        }
    }
    else{
        r[s.length()/2] =char(int(s[s.length()/2]-'0')-1+'0');
        if(diff(toInt(s),n)>diff(toInt(r),n)){
          s=r;
        }
    }

  }
  //9999=>>100001
  ll x=toInt(s);
    ll dif=n-x;
    for(int i=1;i<dif;i++){
      if(isPalindrome(n+i)){
        // cout<<x<<" = x ";
        cout<<(n+i)<<endl;
        return;      
      }
    }
  cout<<s<<endl;
} 

int main()
{	
	int t;
	for(cin>>t;t--;){
		ll n;
		cin>>n;
    if(n==0){ cout<<"-1"<<endl;continue;}
		fun(n);
	}
}