#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int h;
	cin>>h;
	int shot=0;
	for (int i = 1; i < n+1 ; ++i)
	{
		int x;
		cin>>x;
		if(x>h){
			shot++;
		}
	}
	cout<<shot<<endl;
	}
}