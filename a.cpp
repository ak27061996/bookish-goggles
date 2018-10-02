#include <bits/stdc++.h>
using namespace std;

void findSetPositions(){
    int n;
    while(cin>>n){
    while(n>0){
           printf(" %u ", log2(n&-n));
           n=n^(1<<(log2(n&-n)));
           //cout<<n<<" ";
    }
 }
}

void checkAnd(){
    int x=0;
    freopen("out.txt","w",stdout);
    while(x++<100){
      bitset<8>s=x;
      cout<<x<<endl;  
        for(int i=0;i<(1<<10);i++){
            //cout<<(i&x)<<"iAnd x"<<i<<endl;
            //bitset<8>t=i;
            if((i&x)==i){
                //cout<<t<<"= i=";
            cout<<i<<" ";
            }
        }
      cout<<"\n"<<s<<endl;
        for(int i=0;i<(1<<10);i++){
            bitset<8>t=i;
            if((i&x)==i){
                cout<<t<<" ";
//            cout<<i<<" ";
            }
        }
        cout<<"\n";
   }

}
int main(){
    int t;
    findSetPositions();
   // checkAnd();
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     long long  a[n];
    //     for(int i=0;i<n;i++)cin>>a[i];
    //      int q;
    //      cin>>q;
    //      while(q--){
    //         long long x,y;
    //         cin>>x>>y;

    //      }   
    // }
}