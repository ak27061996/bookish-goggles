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
       if(x==0&&y==0&&z==0) return 0;
       if((x==0&&y==0)||(z==0&&y==0)||(x==0&&z==0)) return c1*(x+y+z);
       if(x==0){
           return min(c1*y+fn(0,0,z),c1*z+fn(0,y,0),c2*min(y,z)+fn(0,y-min(y,z),z-min(y,z)));
        }
       if(y==0){
        return min(c1*x+fn(0,0,z),c1*z+fn(x,0,0),c2*min(x,z)+fn(x-min(x,z),0,z-min(x,z)));
        }
       if(z==0){
        return min(c1*y+fn(x,0,0),c1*x+fn(0,y,0),c2*min(y,x)+fn(x-min(y,x),y-min(y,x),0));
       }
     
       return min(c1*x+fn(0,y,z),c1*y+fn(x,0,z),c1*z+fn(x,y,0),c2*min(y,x)+fn(x-min(y,x),y-min(y,x),z),c2*min(y,z)+fn(x,y-min(y,z),z-min(y,z)) ,c2*min(x,z)+fn(x-min(x,z),y,z-min(x,z)),c3*min(x,y,z)+fn(x-min(x,y,z),y-min(x,y,z),z-min(x,y,z)) )  ; 
    }
    ll fnq(ll x,ll y,ll z){
       if(x==0&&y==0&&z==0) return 0;
       if((x==0&&y==0)||(z==0&&y==0)||(x==0&&z==0)) return c1*(x+y+z);
       if(x==0){
           return min(c1+fn(0,y-1,z),c1+fn(0,y,z-1),c2+fn(0,y-1,z-1));
        }
       if(y==0){
        return min(c1+fn(x-1,0,z),c1+fn(x,0,z-1),c2+fn(x-1,0,z-1));
        }
       if(z==0){
        return min(c1+fn(x,y-1,0),c1+fn(x-1,y,0),c2+fn(x-1,y-1,0));
       }
       
       return min(c1+fn(x-1,y,z),c1+fn(x,y-1,z),c1+fn(x,y,z-1),c2+fn(x-1,y-1,z),c2+fn(x,y-1,z-1) ,c2+fn(x-1,y,z-1),c3+fn(x-1,y-1,z-1) )  ; 
    } 
    int main(){
        int t;
        for(cin>>t;t--;){
            ll x,y,z,a,b,c;
            cin>>x>>y>>z>>a>>b>>c;
               c1=a,c2=b,c3=c;
               cout<<fnq(x,y,z)<<endl;  
        }
    } 


















// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// ll c1,ll c2,ll c3;
// // ll fn(ll x,ll y,ll z){
// //    if(x==0&&y==0&&z==0) return 0;
// //    if((x==0&&y==0)||(z==0&&y==0)||(x==0&&==0)) return c1*(x+y+z);
// //    if(x==0){
// //        return min(c1*y+fn(0,0,z),c1*z+fn(0,y,0),c2*min(y,z)+fn(0,y-min(y,z),z-min(y,z)));
// //     }
// //    if(y==0){
// //     return min(c1*x+fn(0,0,z),c1*z+fn(x,0,0),c2*min(x,z)+fn(x-min(x,z),0,z-min(x,z)));
// //     }
// //    if(z==0){
// //     return min(c1*y+fn(x,0,0),c1*x+fn(0,y,0),c2*min(y,x)+fn(x-min(y,x),y-min(y,x),0));
// //    } 
// //    return min(c1*x+fn(0,y,z),c1*y+fn(x,0,z),c1*z+fn(x,y,0),c2*min(y,x)+fn(x-min(y,x),y-min(y,x),0)                      )   
// // } 
// int main(){
//     int t;
//     for(cin>>t;t--;){
//         ll x,y,z,a,b,c;
//         cin>>x>>y>>z>>a>>b>>c;
//            c1=a,c2=b,c3=c;
//            cout<<fn(x,y,z)<<endl;  
//     }
// }