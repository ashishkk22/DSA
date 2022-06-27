#include <bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin >> size;
	int t;
	cin >> t;
	string s;
	cin >> s;
	cout << s;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='B'){
			swap(s[i],s[t+i]);
			cout << s[i] << endl;
		}
	}
	cout << s;
	
}