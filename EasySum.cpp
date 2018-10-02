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
	int n,m;
	cin>>n;
	int a[n];for(int i=0;i<n;i++)cin>>a[i];
	cin>>m;
	int c[m];for(int i=0;i<m;i++)cin>>c[i];
	set<int >s,s2;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(c[i]-a[j]>=0)
				s.insert(c[i]-a[j]);
		}
		s2.insert(c[i]);
	}
	vector<int>rs;
 	for(auto ii=s.begin();ii!=s.end();ii++){
 		int cnt=0;
 		for(int j=0;j<n;j++){
 			int sum=a[j]+(*ii);
 			auto itr=s2.find(sum);
 			if(itr!=s2.end()){
 				s2.erase(itr);
 				cnt++;
 			}
 		}
 		if(cnt>0){
 			rs.push_back(*ii);
 		}
 	}

 	for(int i=0;i<rs.size();i++){
 		cout<<rs[i]<<" ";
 	}


/*
2 1 3  4

1 2 3

1 2 3 4 5 6

4 5 6 7 


*/

}