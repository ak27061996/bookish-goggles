#include<bits/stdc++.h>
//#include<gtksourceview/gtksource.h>
using namespace std;
int main(){
  int t;
  for(cin>>t;t--;){
     int n,p;
     cin>>n>>p;
    int hard=0,cacke=0;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>=p/2)
            cacke++;
        else if(x<=p/10)
            hard++;
     }
    if(cacke==1&&hard==2)
        cout<<"yes\n";
    else
        cout<<"no\n";
  }





}
