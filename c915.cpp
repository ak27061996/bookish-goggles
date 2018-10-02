//http://codeforces.com/problemset/problem/915/C
#include <bits/stdc++.h>
#define ll long long
#define ps push_back
#define F first
#define S second
#define mp make_pair
template<class T>T max(T a,T b){return a>b?a:b;}
template<class T>T min(T a,T b){return a<b?a:b;}
ll gcd(ll a,ll b){return b==0?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return (a*(b/gcd(a,b)));}
using namespace std;
//to_string(val) val=float,int,long long,double
ll to_Int(string s){ll n;stringstream iss(s);iss>>n;return n;}
string to_str(ll n){stringstream ss;ss << n;return ss.str();} 
ll a,b;
string aa,bb;
string fn(string s1,string s2){
	if(s1==s2) return s1;

	for(int i=0;i<bb.length();i++){
		int j=upper_bound(aa.begin(),aa.end(),bb[i])-aa.begin();
      		 
	}

}
int main(){
		cin>>a>>b;
	    aa=to_str(a),bb=to_str(b);
		sort(aa.begin(),aa.end());
		 string rs="";
		 if(aa.length()<b.length()){
		 	cout<<aa<<endl;
		 	return 0;
		 }
		 //cout<<fn(0,"");
		 // for(int i=0;i<bb.length();i++){
		 //      int j=upper_bound(aa.begin(),aa.end(),bb[i])-aa.begin();
		 //      for(int k=j-1;k>=0;k--){
		 //      	if(aa[k]<bb[k])
		 //      } 
		 // }

		// while(next_permutation(aa.begin(), aa.end())){
		// 	ll x=to_Int(aa);
		// 	if(x=>rs&&x<b)
		// 		rs=x;
		// 	//cout<<aa<<" ";
		// }
		cout<<rs<<endl;
   
    return 0;
}