//http://codeforces.com/problemset/problem/899/C
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n;cin>>n;
	ll s=(n*(n+1))/2;
	ll x=s/2;
	vector<ll > v;
	ll i=n;
	while(x>0&&i>0){
		x=x-i;
		if(x<0){
			x=x+i;
		}else{
			v.push_back(i);
		}
		i--;
	}
	cout<<(s%2)<<endl<<v.size()<<" ";
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
}