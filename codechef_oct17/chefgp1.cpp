#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
using namespace std;

void FastIO(){ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
void append(string &s,int x,char c){
    for(int i=0;i<x;i++)
      s=s+c;  
}
string make(int cnta,int cntb,int y,char a,char b){
    string rs,s;
    if(cnta==cntb) {
        for(int i=0;i<cnta+cntb;i++){  if(i&1) s=s+'a';   else s=s+'b';}
        return s;
    }
  //  cntb>cnta
      int xy,rem;
       xy=cntb/(cnta+1);
       rem=cntb%(cnta+1);
        for(int i=0;i<cnta;i++){
           if(xy>y){ 
               rem=rem+xy-y;
               append(rs,y,b);    
            }
           else{ 
               append(rs,xy,b);
               if(rem>0&&xy!=y){
                   rs=rs+b;
                   rem--;
               }
           }
           rs=rs+a;
        }
       //append(rs,rem+xy,b);


       //cout<<rs<<endl;
       int lc=0;
       for(int j=0;j<rem+xy;j++){
           //rs=rs+b;
           lc++;
           if(lc==y+1){
               rs=rs+'*';
               lc=1;
           }
           rs=rs+b;
       }    
     return rs;   
}


void brute_force(int cnta,int cntb,int x, int y){
     string s;
    if(cnta>cntb) s=make(cntb,cnta,x,'b','a');
    else s=make(cnta,cntb,y,'a','b');
    cout<<s<<endl;
    //print_str(s,x,y);
}

int main(){
    int t;
    FastIO();
    for(cin>>t;t--;){
         string ls;
         
         int x,y,lx=0,ly=0;

         cin>>ls>>x>>y;
         
         int cnta=0,cntb=0;
       
         for(int i=0;i<ls.length();i++){
            if(ls[i]=='a') cnta++;
            else cntb++;
         }
   // cout<<cnta<<" "<<cntb<<endl;
   brute_force(cnta,cntb,x,y);
    }
} 