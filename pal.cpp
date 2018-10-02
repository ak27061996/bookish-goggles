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
vector<string> v;
int rs=0;


void fn(string s,int i,int j){
   // //if(i==j){v.push_back(s); return ;}
   // if(i>s.length()) return ;
   // if(j<0) return ;
   // if(i>j) return ;
   // string w=s.substr(i,j-i+1);
   // cout<<w<<"  ";
   // //if(ispalin(w)){cout<<w<<" "; /*v.push_back(s.substr(i,j-i+1));*/}
   // fn(s,i+1,j);
   // fn(s,i,j-1);}

  int n=s.length();
  for(int i=0;i<n;i++){
    for (int j = i; j < n; j++){
      string w=s.substr(i,j-i+1);
      if (ispalin(w))
      {
        rs++;
      }
    }
  }
}
int main()
{
  string s;
  cin>>s;
  fn(s,0,s.length());
  cout<<rs<<endl;
   //rs=0;
   // for(int i=0;i<v.size();i++)
   //  cout<<v[i]<<" ";
   //  v.clear();
  return 0;
}
