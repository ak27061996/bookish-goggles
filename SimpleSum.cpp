// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ff first
// #define ss second
// #define pb push_back
// #define pf push_front
// #define mp make_pair
// #define sz(s) (int)s.size()
// #define bitcount __builtin_popcount
// #define all(v) v.begin(),v.end()
// #define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define M 1000000007
// #define PI acos(-1)
// ll gcd(ll a,ll b){return (b==0?a:gcd(b,a%b));}
// ll pow_(ll a,ll b,ll m){ll res=1;while(b){if(b&1)res=(res*a)%m;a=(a*a)%m;b>>=1;}return res;}
// //inbuilt function for this is = to_string(n);
// vector <int> removeDuplicates(vector <int> vec){
// 	sort( vec.begin(), vec.end() );
// vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
// }
// string myToString(ll n){ostringstream s; s<<n;return s.str();}
// ll toInt(string s){ ll n=0; stringstream ss(s);ss>>n;return n;} 
// int main()
// {	
// 	//boost();
// 	//#ifndef ONLINE_JUDGE
// 	//freopen("input.txt","r",stdin);
// 	//freopen("output.txt","w",stdout);
// 	//#endif
// }


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
	int t;
	for(cin>>t;t--;){
		ll l,p;
		cin>>p>>l;
		ll a[p-1][p-1];
		for(int i=0;i<p-1;i++)
			for(int j=0;j<p-1;j++)
				a[i][j]=1;

			for(int i=0;i<p-1;i++){
				for(int j=0;j<p-1;j++){
					a[i][j]=(a[i-1>=0?i-1:i][j]*(j+1))%p;
				}
			}
			for(int i=0;i<p-1;i++){
				for(int j=0;j<p-1;j++){
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
			cout <<endl<<endl;
			for(int i=0;i<p-1;i++){
				sort(a[i],a[i]+p-1);
				for(int j=0;j<p-1;j++){
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}



		}
	}

	/*
3 1

mid
5 1
7 2


11 ->1 2 3 4
13  3-> 1 2 5
17      1 2 3 5 6 7 
19 7











	*/