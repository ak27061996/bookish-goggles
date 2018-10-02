#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
for(cin>>t;t--;){
    int n,k;
    cin>>n>>k;
    int a[n],mex[200003] ;
    for(int i=0;i<200003;i++)
        mex[i]=-1;


    for(int i=0;i<n;i++){
        cin>>a[i];
        mex[a[i]]=a[i];
    }
    int x=0;
    for(int i=0;i<200003;i++){
        if(mex[i]!=i)
            k--;
        if(k==-1){x=i; break;}
    }
    cout<<x<<endl;
    /*sort(a,a+n);
    int r;
    bool f=0;
    for(int i=0,r=0;i<n;){
        if(a[i]==r){
             i++;r++;
            continue;
        }
        else{
            r++;
            k--;
        }
        if(k==-1){
            f=1;
                break;
        }
    }
   if(f){
    cout<<r+k+1<<endl;
   }
   else{

   }*/
}


}
