#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll min(ll a,ll b,ll c){
  return min(a,min(b,c));
}
ll min(ll a,ll b,ll c,ll d,ll e,ll f,ll g){
  return min(a,min(b,min(c,min(d,min(e,min(f,g))))));
}
 
ll c1, c2, c3;
ll fn(ll x,ll y,ll z){
  cout<<x<<" "<<y<<" "<<z<<endl;;
   if(x==0&&y==0&&z==0) return 0;
   if((x==0&&y==0)||(z==0&&y==0)||(x==0&&z==0)) return c1*(x+y+z);
   if(x<0||y<0||z<0) return 0;
   // if(x==0){
   //     return min(c1*1+fn(0,y-1,z),c1*1+fn(0,y,z-1),c2*1+fn(0,y-1,z-1));
   //  }
   // if(y==0){
   //  return min(c1*1+fn(x-1,0,z),c1*1+fn(x,0,z-1),c2*1+fn(x-1,0,z-1));
   //  }
   // if(z==0){
   //  return min(c1*1+fn(x,y-1,0),c1*1+fn(x-1,y,0),c2*1+fn(x-1,y-1,0));
   // }
 
   return min(c1*1+fn(x-1,y,z),c1*1+fn(x,y-1,z),c1*1+fn(x,y,z-1),c2*1+fn(x-1,y-1,z),c2*1+fn(x,y-1,z-1) ,c2*1+fn(x-1,y,z-1),c3*1+fn(x-1,y-1,z-1) )  ; 
}
/*ll fnq(ll x,ll y,ll z){
    cout<<x<<" "<<y<<" "<<z<<endl;;
   if(x==0&&y==0&&z==0) return 0;
   if((x==0&&y==0)||(z==0&&y==0)||(x==0&&z==0)) return c1*(x+y+z);
   if(x==0){
       return min(c1+fnq(0,y-1,z),c1+fnq(0,y,z-1),c2+fnq(0,y-1,z-1));
    }
   if(y==0){
    return min(c1+fnq(x-1,0,z),c1+fnq(x,0,z-1),c2+fnq(x-1,0,z-1));
    }
   if(z==0){
    return min(c1+fnq(x,y-1,0),c1+fnq(x-1,y,0),c2+fnq(x-1,y-1,0));
   }
   
   return min(c1+fnq(x-1,y,z),c1+fnq(x,y-1,z),c1+fnq(x,y,z-1),c2+fnq(x-1,y-1,z),c2+fnq(x,y-1,z-1) ,c2+fnq(x-1,y,z-1),c3+fnq(x-1,y-1,z-1) )  ; 
} */
int main(){
    int t;
    for(cin>>t;t--;){

        ll x,y,z,a,b,c;
        cin>>x>>y>>z>>a>>b>>c;
           c1=a,c2=b,c3=c;
           cout<<fn(x,y,z)<<endl;  
    }
}