//power of two or not
#include <bits/stdc++.h>
using namespace std;
int main(){
	// 10000 => 16
	// 01111 => 15 (n-1)
	// and if we do & then we will get 0
	int n;
	cin >> n;
	if((n&(n-1))==0){
		cout << "Yes";
	}
	else{
		cout << " no";
	}
}