#include <bits/stdc++.h>
#define ll long long
#define ps push_back
#define F first
#define S second
#define mp make_pair
using namespace std;

int wrongSolver(unsigned int *a,int n) {
	vector<unsigned int> prefSum(n), sufSum(n);
	prefSum[0] = a[0];
	for (int i = 1; i < n; i++) {
		prefSum[i] = prefSum[i - 1] + a[i];
	}
	sufSum[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		sufSum[i] = sufSum[i + 1] + a[i];
	}
	unsigned int mn = prefSum[0] + sufSum[0];
	int where = 1;
	for (int i = 1; i < n; i++) {
		unsigned int val = prefSum[i] + sufSum[i];
		if (val < mn) {
			mn = val;
			where = i + 1;
		}
	}
	return where;
}

int check(unsigned int* a,ll n){
    
    vector<ll> prefSum(n), sufSum(n);
	prefSum[0] = a[0];
	for (int i = 1; i < n; i++) {
		prefSum[i] = (prefSum[i - 1] + 1LL*a[i])%(1LL<<32);
	}
	sufSum[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		sufSum[i] = (sufSum[i + 1] + 1LL*a[i])%(1LL<<32);
	}
	ll mn = prefSum[0] + sufSum[0];
	int where = 1;
	for (int i = 1; i < n; i++) {
		ll val = prefSum[i] + sufSum[i];
		if (val < mn) {
			mn = val;
			where = i + 1;
		}
	}
	return where;
    
    
    /*ll s=0,mn=LLONG_MAX,ind =-1,sind=-1,z;
    for(ll i=0;i<n;i++){
        s=s+a[i];
        if(mn>a[i]){
            ind=i;
            mn=a[i];
        }
      }
      mn=LLONG_MAX;
      for(ll i=0;i<n;i++){
        z=(s+a[i])%(1LL<<32);
        if(mn>z){
            sind=i;
            mn=z;
        }
      }

      cout<<ind<<" =real ima= "<<sind<<endl;;
      */
}


int main()
{
   int t;
   for(cin>>t;t--;){
    ll n;
    cin>>n;
    unsigned int a[n];
    ll x=(1LL<<32)/n;
    ll rem =(1LL<<32)%n;
      
    for(ll i=0;i<n;i++){
      a[i]=x;
    }
    a[0]=1;
  //  a[n-1]=a[n-1]+rem;
    for(int i=12;i<n;i++){
        if(rem>0){
            a[i]=a[i]+1;
            rem--;
        }
        else break;
        
    }   


    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    /*test*/
  //  cout<<x<<" "<<rem<<"     "<<((1LL<<32)==((x)*(n+1)))<<endl;
// cout<<check(a,n)<<"=rl img= "<<wrongSolver(a,n);
// cout<<" re"<<rem<<endl;
 //99997
   /***********/
   }
    return 0;
}
