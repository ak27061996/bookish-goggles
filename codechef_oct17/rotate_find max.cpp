#include<bits/stdc++.h>
#define ll long long 
#define mp make_pair
using namespace std;
int main(){
    int t;
    for(cin>>t;t--;){
         ll n;
         cin>>n;
        vector <ll >v[n];
        ll tab[4][n];
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            ll mx=LLONG_MIN,imx=-1;
            ll mn=LLONG_MAX,imn=-1;
            for(int j=0;j<m;j++){
                ll x;
                cin>>x;
                v[i].push_back(x);
                if(mx<x){
                    mx=x;
                    imx=j;
                }
                if(mn>x){
                    mn=x;
                    imn=i;
                }
            }
            //v[][i]
        }

    }
}