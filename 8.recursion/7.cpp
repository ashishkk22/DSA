//power function optimized
// a^n =(a^n/2)^2 and if it was odd then a^n =a(a^n/2)^2
#include <bits/stdc++.h>
using namespace std;
int power(int a , int n){
	if(n==0){
		return 1;
	}
	int subPro = power(a,n/2);
	int subProSq = subPro*subPro;
	if(n&1){
		return a*subProSq;
	}
	return subProSq;
}
int main(){
	int a,n;
	cin >> a >> n;
	cout << power(a,n) << endl;
	return 0;
}