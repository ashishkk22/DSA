#include <bits/stdc++.h>
using namespace std;
int main(){
	string ak;
	cin >> ak;
	int x1,x2;
	cin >> x1 >> x2;
	if(x2==1) {
		cout << '{}';
		return;
	}
	vector<string> v;
	string s;	
	for(int i=0; i<ak.length(); i++){
		if(ak[i]!=','){
			s =  s + ak[i];
		}
		if(ak[i]==','){
			v.push_back(s);
			s = "";
		}
	}
	if(s!="") v.push_back(s);
	for(int i=0; i<v.size(); i++){
		cout << v[i] << endl;
	}
	int size = 2^v.size();

	vector<vector<string>> out[size];
	vector<string> em;
	em.push_back("");
	out.push_back(em);
	for(int i=0; i<v.size(); i++){
		vector<string> temp;
		temp.push_back(v[i]);
		out.push_back(temp);
	}
	for(int i=0; i< v.size(); i++){
		vector<string> temp;
		for(int j=i+1; j<v.size(); j++){
			
		}
	}
}