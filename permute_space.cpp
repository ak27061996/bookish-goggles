#include <bits/stdc++.h>
using namespace std;
int n;
void fn(string s,string &rs){
    if(s.length()==1||s.length()==0){ cout<<"("<<rs<<") ";  return ;}
    string s1,s2;
    for(int j=1;j<=s.length();j++){
        s1=s.substr(0,j);
        s2=s.substr(j,s.length()-j);
        cout<<s1<<" "<<s2<<endl;
        fn(s1);fn(s2);
        //cout<<"("<<(s1+" "+s2)<<") ";
    }

}
int main() {
	int t;
	for(cin>>t;t--;){
	    string s,rs="";
	    cin>>s;
	    n=s.length();
	    fn(s,rs);
	}
	return 0;
}
