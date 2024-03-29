//set bits of any number
//set bits are those which is 1
//so we have to count the available 1 in the given input's binary represntation
#include <bits/stdc++.h>
using namespace std;
int count_bits(int n){
	int count = 0;
	while(n>0){
		int last_bit = (n&1);
		count += last_bit;
		n = n>>1;
	}
	return count;
}
//counting sets bits : Hack (Faster Method)
int count_bits_hack(int n){
	int ans = 0;
	while(n>0){
		//removes the last set bit from the current number
		n = n & (n-1);
		ans++;
	}
	return ans;
}
int main(){
	int n;
	cin >> n;
	cout <<count_bits(n)<<endl;
	cout <<count_bits_hack(n);

}