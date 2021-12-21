#include <bits/stdc++.h>
using namespace std;
void substring(string a,int n,int z){
	if (a.length()==n)
	{
		return ;
	}
	cout << a[n];
	for (int i = 0; i < z; ++i)
	{
		if(a[n]==a[i]){
			continue;
		}
		cout <<a[i];
	}
	cout << endl;
	cout << a[n];
	for (int i = z-1; i >= 0; i--)
	{
		if(a[n]==a[i]){
			continue;
		}
		cout <<a[i];
	}
	cout << endl;
	substring(a,n+1,z);
}
int main(){
	string a;
	cin >>a;
	int z = a.length();
	int n = 0;
	// cout <<a << " " <<n;
	substring(a,n,z);
}