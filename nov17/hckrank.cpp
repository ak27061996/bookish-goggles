 #include <bits/stdc++.h>
using namespace std;
int key;
string compr;
bool cprt(vector<string >a,vector<string >b){
    //cout<<a[key-1]<<" "<<b[key-1]<<endl;
    //if(compr=="numeric")
    // return stoi(a[key-1])>stoi(b[key-1]);
    return a[key-1]>b[key-1];
}
void print(vector< vector<string> >v){
    for(int i=1;i<v.size();i++){
        for(int j=0;j<v[i].size();j++)
        cout<<v[i][j]<<" ";
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    vector<vector<string> >v(n+1);
    for(int i=0;i<=n;i++)
    {
        string s,w;
       getline(cin,s);
      //  cout<<s<<" "<<i;
        istringstream ss(s);
        while(ss>>w){
            v[i].push_back(w);
        }
    }
   bool rev;
    cin>>key>>rev>>compr;
    
    sort(v.begin(),v.end());
    print(v);
    return 0;
}
