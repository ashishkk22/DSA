#include <bits/stdc++.h>
using namespace std;
void method_increasing(int n){
	if(n==0){
		return;
	}
	method_increasing(n-1);
	cout<<n;
}
void method_decreasing(int n){
	if(n==0){
		return;
	}
	cout<<n;
	method_decreasing(n-1);
}
int main(){
	int n;
	cin >> n;
	method_increasing(n);
	cout << endl;
	method_decreasing(n);

}