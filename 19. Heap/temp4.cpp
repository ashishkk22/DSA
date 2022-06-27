#include <bits/stdc++.h>
using namespace std;
// aa code different unique string ane aeni frequency find karvano che
int main(){
	unorder_map<string,int>m;
	int n;
	cin >> n;
	for(int i=0; i<n ; i++){
		string s;
		cin >> s;
		// m[s] = m[s] + 1;
		m[s]++; // aa rite pan lakhi sakiae
	}
	//ahi 2 query che banne ni freaquncy keva ni che
	int q;
	cin>>q;
	while(q--){
		string s;
		cin >>s;
		cout << m[s] << endl; //aetle aa print karse ketli var aa string aavi che
	}
	for(auto pr: m){
		cout << pr.first << " " << pr.second << endl;
	}
}