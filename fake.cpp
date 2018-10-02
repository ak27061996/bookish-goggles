#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()                     
#define F first         
#define S second
#define ll  long long
#define M 1000000007
bool com(pair<int,int>a,pair<int,int>b){
    return a.first<b.first;                                     
}


template<typename T>
bool compare(const T &a,const T &b){                             
    return a.first<b.first;                                                      
}                                                                                                     


int binarySearch(vector<pair<int,int> > arr, int l, int r, int x){
   if (r >= l)      
   {     
        int mid = l + (r - l)/2;   
        if (arr[mid].F == x)  
            return mid;  

        if (arr[mid].F > x)                                                            
            return binarySearch(arr, l, mid-1, x);   
        return binarySearch(arr, mid+1, r, x);    
   }
   return -1;  
}   

                                                

int bSearch(int*a,int n,int pi,vector<pair<int,int> >v){          
    int l =0,h=n-1;                  
    int ii =v[pi].S;     // index of element in array    
    int big=n-pi-1;     //total bigger element  
    int les=pi;         //less element   
    int rs=0,xb=0,xl=0;    
    while(l<=h){    
        int m = (l+h)/2;   
        //cout<<l<<" =l h= "<<h<<" m= "<<m<<" rs= "<<rs<<" ii="<<ii<<" "<<big<<" =big les= "<<les<<endl;    
        if(m==ii){//check this one;   
            return rs-min(xl,xb);
        }else if(a[m]>a[ii]){
            if(ii>m){
                rs++;   
                l=m+1;
                xl++;
                les--;    
            }else{
                h=m-1;                       
                big--;                      
            }
        }else{                              
            if(m>ii){
                rs++;                   
                h=m-1;                     
                xb++;                                  
                big--;                               
            }
            else{
            l=m+1;
                les--;                                                                     
            }
        }
        if(les<0||big<0) return -1;               
    }
    return -1;
}                  



int main() {                                                   
    int t;                                                             
    for(cin >> t;t--;){                                      
        ll n,q;                                   
        cin>>n>>q;                                                          
        int a[n];                                              
        vector<pair<int,int> >v(n); ;                                                               
        for(int i=0;i<n;i++){                                       
            cin>>a[i];                                                              
            v[i].F=a[i];                                                            
            v[i].S=i;                                                
        }                                              
        sort(all(v),com);                           
        while(q--){                                      
            int x;                                  
            cin>>x;                                  
            int y;                          
            int ii=binarySearch(v,0,n-1,x);  //upper_bound(all(v),make_pair(x,y),compare<pair<int,int> >)-v.begin()-1;
            cout<<bSearch(a, n,ii,v)<<endl;;                 
        }                                          
        
    }             
    return 0;        
}
 













