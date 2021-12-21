#include <bits/stdc++.h>
using namespace std;
// pass by value
//and after adding the & it is going to become 
void applyTax(int &income){
	float tax = 0.10;
	income = (1-tax)*income;
}
int main()
{
	int income;
	cin>>income;
	applyTax(income);
	cout<< income<<endl;
}