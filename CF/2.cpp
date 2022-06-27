#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t){
		string s;
		cin >>s;
		int n = s.length();
		if(n>10){
			string temp;
			int aa = n-2;
			temp = temp + s[0]+to_string(aa) +s[n-1];
			cout << temp << endl;
		}else{
			cout << s << endl;	
		}
		t--;
	}
}