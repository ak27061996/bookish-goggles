#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;
 
#define fast() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define mem(a,x) memset(a,x,sizeof(a))
#define test int t;cin>>t; while(t--)
 
const int MAXN = 1e6+5;
const int MOD = 1e9+7;
 
using namespace std;
 
int main(){
  //fast();
  //freopen("input1.txt","r",stdin);
  //freopen("output.txt","r",stdout);
    int t;
    cin>>t;
    t=1;
    while(t--) {
    	ll n;
    	cin>>n;
    	string s;
     	for(int i=0;i<n;i++){
            string x;
            cin>>x;
            s=s+x; 
          
    	}
    	int q;
    	cin>>q;
    	while(q--){
    		ll pos;
    		cin>>pos;
    		n=s.length();
    		if(pos%(n+1)==0){cout<<"$"<<endl;continue;}
    		ll x=pos/(n+1);
    		ll str_pos = pos%(n+1);
            if(x&1){
               cout<<s[n-str_pos]<<"\n";                   
            }else{
              cout<<s[str_pos-1]<<"\n";
            } 

         }
    }
}   	