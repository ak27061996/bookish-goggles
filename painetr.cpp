//https://practice.geeksforgeeks.org/problems/the-painters-partition-problem/0
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
/*
n=6,k=3;
10 50 30 60 40 20 
10 60 90 150 190 210
210 200 150 120 60 20	
Doing it by binary Search
l=max(arr[i]);
h=sum(arr[i]);
*/
int  noPainters(int *a,int n,int sum){
	int s=0,p=1;
	for(int i=0;i<n;i++){
		s=s+a[i];
		if(s>sum){
			s=a[i];
			p++;
		}
	}
	return p;
}
int main()
{	
	int t;
	for(cin>>t;t--;){
		int n,k;
		cin>>k>>n;
		int a[n],h,l;h=0,l=INT_MIN;
		for(int i=0;i<n;i++){
			cin>>a[i];
			 h+=a[i];
			 l=max(a[i],l);
		}
    int r=h;
    while(r>l){
    	int mid=(l+r)/2;
    	int p=noPainters(a,n,mid);
    	if(p<=k){
    		r=mid;
    	}else{
    		l=mid+1;
    	}
    }

cout<<l<<endl;
	}
}



