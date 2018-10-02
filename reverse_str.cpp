#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;
 
//#define fast() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define full(a) a.begin(),a.end()
#define mem(a,x) memset(a,x,sizeof(a))
#define test int t;cin>>t; while(t--)
 
const int MAXN = 1e6+5;
const int MOD = 1e9+7;
 
using namespace std;
 void print(string s,int i){
   if(i+1<=s.length()){
     print(s,i+1);
     cout<<s[i];
   }
 else
   return ;
 
 }
int main(){
  //fast();
  //freopen("input1.txt","r",stdin);
  //freopen("output.txt","r",stdout);
    int t;
    cin>>t;
    while(t--) {
       string s;
       cin>>s;
       print(s,0);
   }
}   