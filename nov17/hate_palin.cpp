#include<bits/stdc++.h>
using namespace std;
int maxx(int a,int b,int c){
  a=(a>b?a:b);
  return (a>c?a:c);
}

void getstr(int chr,int l){
  string s;
  int x=l/2;
  int cc=x/3;
  s.append(l/2-cc,'a');

  for(int i=0;i<2*cc;i++)
    if(i%2==0)
    s=s+'b';
    else s=s+'a';

  s.append(l-l/2-cc,'b');
cout<<(x-cc)<<" "<<(2*cc+1)<<" "<<(l-l/2-cc)<<endl;
  cout<<maxx((x-cc),2*cc+1,l-l/2-cc)<<" "<<s<<endl;
}

int main(){
  //freopen("input1.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    int t;
   for(cin>>t;t--;){
      int n,chr;
      cin>>n>>chr;
        if(chr==1){
        	string s;
        	s.append(n,'a');
        	cout<<n<<" "<<s<<endl;
        	continue;
        }
        if(chr==2){
            getstr(chr,n); 
            continue;
        }

       if(chr>=3){
      	cout<<"1"<<" ";
      	for(int i=0,j=0;i<n;i++,j=(j+1)%chr)
      		cout<<(char)('a'+j);
      	   cout<<endl;}
    }
}