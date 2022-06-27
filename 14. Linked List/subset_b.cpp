#include <bits/stdc++.h>
using namespace std;
int main(){
	string ak;
	cin >> ak;
	vector<string> v;
	string s;	
	for(int i=0; i<ak.length(); i++){
		if(ak[i]!=','){
			s =  s + ak[i];
			cout << ak[i] << endl;
		}
		if(ak[i]==','){
			v.push_back(s);
			s = "";
		}
	}
	for(int i=0; i<v.size(); i++){
		cout << v[i] << endl;
	}
}