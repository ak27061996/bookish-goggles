#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define F first
#define S second
#define ll  long long
#define M 1000000007
bool isvalid(int i,int n){
    return i>=0&&i<n;
}
int main(){
    int t;
    for(cin >> t;t--;){
        ll n,q;
        cin>>n;
        vector<ll >a(n),b;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        b=a;
        for(int i=0;i<n;){
            if(a[i]<a[i+1]&&i+1<n){
                a[i]=-a[i];i++;
                while(a[i]<a[i+1]&&i+1<n){i++;}
            }
            i++;
            bool c=0;
            while(a[i]>a[i+1]&&i+1<n){
                i++;c=1;
            }
            if(c){a[i]=-a[i];i++;}
        }
        if(a[n-1]>0&&a[n-2]>0){
            if(a[n-1]<a[n-2]) a[n-1]=-a[n-1];
        }
       for(int i=0;i<n-1;i++){
           if(a[i]+a[i+1]<=0){
              //if(a[i]<0&&a[i+1]<0){
                if(abs(a[i])<abs(a[i+1])){
                    a[i]=-abs(a[i]);
                    a[i+1]=abs(a[i+1]);
                }else if(abs(a[i])>abs(a[i+1])){
                    a[i]=abs(a[i]);
                    a[i+1]=-abs(a[i+1]);
                } else{
                    a[i]=abs(a[i]);
                    a[i+1]=abs(a[i+1]);                   
                }
              // }  
           }
       }
       vector<pair<ll,int> >v;
        ll c=0;
       for(int i=0;i<n;){
          if(a[i]<0){
            v.push_back({a[i],i});i++;
          }else{
            while(a[i]>0&&i<n){
            c = c + a[i] ; i++;
            }
            v.push_back({c,-1});c=0;
          }
       }






////////////////////////failed here 




       int m=v.size(),bb[n]={0};
       for(int i=0;i<v.size();i++){
        if(v[i].F>0&&i+1<m&&i-1>=0){
            if(abs(v[i+1].F+v[i-1].F)>=v[i].F){
                    // if(chekOptimize()){  //20 -6 12 -7 12 -8 32  and thik -1 2 -1 2
                    // }
                    



                int ii=v[i-1].S;
                a[ii]=-a[ii];
               // v[i+1]={a[ii],ii};
            }
        }
       }









      /// for(int i=0;i<v.size();i++) cout<<v[i].F<<" ";
      // cout<<endl; 
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }

	return 0;
}
