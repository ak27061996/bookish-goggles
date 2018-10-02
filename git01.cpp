#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fn(vector<string>v,char R,char G,int r,int g){
    ll rs=0;
    int n=v.size(),m=v[0].length();
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            if(v[i][j]!=R&&i%2==0&&j%2==0){
               rs=rs+r;
            }
            else if(v[i][j]!=G&&i%2==0&&j%2!=0){
                rs=rs+g;
            }
            else if(v[i][j]!=G&&i%2!=0&&j%2==0){
                rs=rs+g;
            }
            else if(v[i][j]!=R&&i%2!=0&&j%2!=0){
               rs=rs+r;
            }
          }
       }
       return rs;
}
int main(){
int t;
for(cin>>t;t--;){
        int n,m;cin>>n>>m;
        int r=3;
        int g=5;

      vector<string>v(n);

      for(int i=0;i<n;i++) cin>>v[i];

       cout<<min(fn(v,'R','G',r,g),fn(v,'G','R',g,r))<<endl;

}
}
