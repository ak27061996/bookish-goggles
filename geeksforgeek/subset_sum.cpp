//http://www.geeksforgeeks.org/subset-sum-divisible-m/
#include<bits/stdc++.h>
using namespace std;
bool modularsum(){

}

int main(){
int t;
for(cin>>t;t--;){
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<(modularsum(a,n,m)?"Yes":"No")<<endl;;
}
}
