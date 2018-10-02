#include<bits/stdc++.h>
using namespace std;
int xorton(int n){
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    return 0;
}
int main(){
    int t;
   for(cin>>t;t--;){
     int l ,r;
     cin>>l>>r;
     int rs=0;
     int x=xorton(l-1);
     int y=xorton(r);
     cout<<(x^y)<<endl;
     
   }
}   