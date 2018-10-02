#include<bits/stdc++.h>
using namespace std;
template<typename T>
string myToString(T n){   //inbuilt function for this is = to_string(n);
    ostringstream s;
    s<<n;
    return s.str();
} 
bool isprime(int n){
   //return  (n==2||n==3||n==5||n==7) ? 1:0; //for digit prime
   if(n==2||n==3) return 1;
   if(n%2==0||n%3==0) return 0;
    
   int w=2;
   for(int i=5;i*i<=n;i=i+w){
     cout<<i<<" ";    
    if(n%i==0) return 0;
        w=6-w; 
    }
    return 1;
}
bool check(int n){
   int x=n;
   while(x>0){
       //cout<<(x%10)<<" =mod ";
       if(!isprime(x%10)){
            return 0;
       }
    x=x/10;
   }
   return 1;    
}
int main(){
    int t;
    for(cin>>t;t--;){
        int n;
        cin>>n;
       cout<<isprime(n)<<endl;
      /*  while(n--){
        //    cout<<"number"<<n<<" ";
            if(check(n)){
                cout<<n<<endl;
                break;
            }
        }*/
        
    }
}