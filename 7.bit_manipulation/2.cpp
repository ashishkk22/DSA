//expression to check the number even or odd
// last bit decide that the number is even or odd
#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin >> x;

	if(x&1){
		cout << "Odd" ;
	}else{
		cout << "Even";
	}
}