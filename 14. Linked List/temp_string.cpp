#include <bits/stdc++.h>
using namespace std;
int main(){
	string input;
	cin >> input;
	int mainI = 0;
	for(int i=0; i<3; i++){
		int n ;
		cin >> n;
		mainI =  mainI*10 + n;
	}
	cout << mainI;
}