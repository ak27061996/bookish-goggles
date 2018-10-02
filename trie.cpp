#include <bits/stdc++.h>
using namespace std;
struct trieNode
{
	bool isend;
	vector< *trieNode >v[26];
	trieNode(){
        isend=false;
		for (int i = 0; i < 27; i++)
		     v[i]=NULL;
	}
}node;
trieNode * trie;
void insertTrie(string s){
      for (int i = 0; i < s.length(); i++)
      {
      	if (!trie->v[s[i]-'a'])
      		trie->v[s[i]-'a']=new trieNode();	
  	
      	trie=trie->v[s[i]-'a'];
      }
      trie->isend=true;
}
bool search(string s){
	for(int i=0;i<s.length();i++){
		if(trie->v[s[i]-'a']!=NULL)
			trie=trie->v[s[i]-'a'];
		else return false;
	}
	return (trie!=NULL&&trie->isend);
}

int main(){
int t;
  for(cin>>t;t--;){
  	int n,q;
  	cin>>n>>q;
  	for (int i = 0; i < n; i++)
  	{
  		string s;
  		cin>>s;
  		insertTrie(s);
  	}
  	while(q--){
  		string s;
  		cin>>s;
  		cout<<search(s);
  	}

  }
}