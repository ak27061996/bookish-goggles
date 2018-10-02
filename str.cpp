#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
const double PI = 4*atan(1); 
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define mem(a,x) memset(a,x,sizeof(a))
 void FastIO(){ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
const int MAXN = 1e6+5;
const int MOD = 1e9+7;
template <class T > T maxx(T a, T b ){  return a > b ? a : b;}
template <class T > T minn(T a, T b ){  return a < b ? a : b;}
template <class T > T gcd(T a, T b ){ return b==0 ? a:gcd(b,a%b);}
#define M 1000000007
template <class T > T powM(T b,T p){ T r=1; while(p>0){if((p%2)==1)r=(r*b)%M; b=(b*b)%M;p/=2;}return r;}
 
 
ld EPS = 1e-9;
bool valid(int i,int r,int j,int c){ return 0<=i&&i<r&&0<=j&&j<c;}
const int di[8] = {0,1,0,-1,1,-1,-1,1};
const int dj[8] = {1,0,-1,0,1,-1,1,-1};

bool fn(string s,string s1){// abc & af
    int cnt=0;
    if(abs(s.length()-s1.length())==0||abs(s.length()==s1.length())==1){
      for(int i=0,j=0;i<s.length();){
              if(s[i]==s1[j]) i++,j++;
              else {
                  j++;
                  cnt++;
                  if(cnt>1) return false;
              } 
      
      }
     
       return true;
      
     
 }
 else return false;
 }

int main(){
  FastIO()
  //freopen("input1.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    int t;
   for(cin>>t;t--;){
       string s,s1;
       cin>>s>>s1;
       cout<<fn(s,s1)<<endl;
   }
}   