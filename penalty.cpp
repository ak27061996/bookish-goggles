#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
while(getline(cin,s)){
    int cna=0,cnb=0,ind=-1;
       string rs="";
       for(int i=0;i<s.length();i++){
           if(i%2==0&&s[i]=='1') cna++;
           else if(i%2!=0&&s[i]=='1') cnb++;
           //cout<<cna<<" "<<cnb<<" "<<(i+1)<<endl;
          if(i<9&&cna>cnb+((10-i-1)/2 + (i+1)%2)){
              rs="TEAM-A";
                   ind=i+1;
                   break;
          }
          if(i<9&&cnb>cna+((10-i-1)/2)){
                rs="TEAM-B";
                   ind=i+1;
                   break;
          }

          // cout<<cna<<" "<<cnb<<" "<<i<<endl;
           if(i>=9&&i%2!=0){
               if(cna>cnb){
                   rs="TEAM-A";
                   ind=i+1;
                   break;
               }
               else if(cna<cnb){
                   rs="TEAM-B";
                   ind=i+1;
                   break;
               }
           }
       }
       if(cna!=cnb){
           cout<<rs<<" "<<ind<<endl;
       }
       else cout<<"TIE"<<endl;

    }
}
