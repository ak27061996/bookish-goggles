#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define mem(a,x) memset(a,x,sizeof(a))
#define a0 first.first
#define a1 first.second
#define a2 second.first
#define a3 second.second
#define polynomial vector<pair<pair<ll,ll>,pair<ll,ll> > >
#define polyVar pair<pair<ll,ll>,pair<ll,ll> >  
const int MAXN = 1e6+5;
const int MOD = 1e9+7; 
ll fn(polynomial v ,ll x,ll i){
   return v[i].a0 + v[i].a1*x +  v[i].a2*x*x + v[i].a3*x*x*x;
}
ll fn1(polyVar v ,ll x){
   return v.a0 + v.a1*x +  v.a2*x*x + v.a3*x*x*x;
}
void print(polynomial v, ll x){
	for(int i=0;i<v.size();i++){
		cout<<v[i].a0<<" "<<v[i].a1<<" "<<v[i].a2<<"  "<<v[i].a3<<" = "<<fn(v,x,i)<<endl;
	}
}
bool com(polyVar a,polyVar b){
    //return fn1(a,100000)>fn1(b,100000);
      if((a.a0+a.a3)>(b.a0+b.a3)) 
    /*if(a.a3>b.a3)
    	return a.a3>b.a3;
    else if(a.a2>b.a2)
    	return a.a2>b.a2;
    else if(a.a1>b.a1)
    	 return a.a1>b.a1;
    	else return a.a0>b.a0;*/
} 
int main(){
    int t;
    cin>>t;
    while(t--) {
      ll n,q;
      cin>>n;
      polynomial v(n);
      for(int i=0;i<n;i++){
            	cin>>v[i].a0>>v[i].a1>>v[i].a2>>v[i].a3;
      }
      sort(v.begin(),v.end(),com);
      print(v,100000);
      //pre();
      cin>>q;
      while(q--){
      	ll qx;
      	cin>>qx;
      	cout<<"all val== \n"; 
      	print(v,qx);
      	cout<<endl;
        cout<<fn(v,qx,n-1)<<endl;;	
      }
      
   }
}   