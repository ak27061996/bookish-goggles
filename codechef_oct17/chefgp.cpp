#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
using namespace std;

void FastIO(){ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
string append(string s,int x,char c){
    
    for(int i=0;i<x;i++)
      s=s+c;
    return s;  
}


void print_str(string s,int x, int y){
    string rs;
    int n=s.length();
   int lx=0,ly=0,ca=0,cb=0;

   if (s[0]=='a') lx=1;
   else ly=1;
     rs=rs+s[0];

   for(int i=1;i<s.length();i++){
        if(s[i]=='a'){
            if(s[i-1]==s[i]){
                lx++;
            }
            else{                
               lx=1;
            }
          }
        else{
          if(s[i-1]==s[i]){
              ly++;
          }
          else ly=1;
        }
        if(lx==x+1){
            lx=1;
            rs=rs+'*';
        }
        if (ly==y+1){
            ly=1;
            rs=rs+'*';
        }
        rs=rs+s[i];
   }
   cout<<rs<<endl;
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
               rs=append(rs,y,b);    
            }
           else{ 
               rs=append(rs,xy,b);
               if(rem>0&&xy!=y){
                   rs=rs+b;
                   rem--;
               }
           }
           rs=rs+a;
        }
       rs=append(rs,rem+xy,b);    
     return rs;   
}


void brute_force(int cnta,int cntb,int x, int y){
     string s;
    
      if(x==1&&y==1){
          bool  f=0;
          if(cnta>cntb) f=1;
          int n=cnta+cntb;
         while(n--){
             if(f){                 
                 s=s+'a';
                 cnta--;
                 if(cntb>0)
                 f=0;
             }
             else{
                 s=s+'b';
                 cntb--;
                 if(cnta>0)
                 f=1;
             }
         }
      }
    else{
             if(cnta>cntb) s=make(cntb,cnta,x,'b','a');
             else s=make(cnta,cntb,y,'a','b');
     }
    print_str(s,x,y);
}
int main(){
    int t;
    FastIO();
    for(cin>>t;t--;){
         string ls;
         
         int x,y,lx=0,ly=0;
     //    scanf("%s%d%d",ls,&x,&y);
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