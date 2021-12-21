//Fast Exponentiation  like 5^3=125 and its take o(n) time but this is better
// in log(n) time

#include <bits/stdc++.h>
using namespace std;
int fastExpo(int a ,int n){
	int ans = 1;
	while(n>0){
		int last_bit = (n&1);
		if(last_bit){
			ans = ans*a;
		}
		a = a*a;
		n = n>>1;
	}
	return ans;
}
int main(){
	int a,n;
	cin >> a >> n;
	cout << fastExpo(a,n);

}