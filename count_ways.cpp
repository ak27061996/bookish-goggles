//https://www.hackerearth.com/challenge/hiring/amazon-developer-hiring-challenge/algorithm/hp-and-counting-number-of-ways-1d73a6a4/
#include<bits/stdc++.h>
#define ll long long 
#define M 1000000007
using namespace std;
ll dp[10002];
ll fn(ll x,ll k){
	if(x<0) return 0;
	if(x==0) return 1;
	if(dp[x]!=-1) return dp[x];
	ll s=0;
	for(int i=1;i<=k;i++){
	  s =(s+(fn(x-i,k))%M)%M;//1 1 1
	}
	dp[x]=s;
	return dp[x]-1;
}
int main(){
	int t;
	for(cin>>t;t--;){
		ll x,k;
		memset(dp,-1,sizeof(dp));
	//	for(int i=0;i<20;i++) cout<<dp[i]<<" ";
		cin>>x>>k;
		cout<<fn(x,k)+1<<endl;
	}
}