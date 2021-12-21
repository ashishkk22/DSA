#include <bits/stdc++.h>
using namespace std;
int first_element(int arr[],int n , int s){
	if(n==0){
		return -1;
	}
	if(arr[0]==s){
		return 0;
	}
	int subIndex = first_element(arr+1,n-1,s);
	if(subIndex!=-1){
		return subIndex+1;
	}
	return -1;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n ; ++i)
	{
		cin >> arr[i];
	}
	int s;
	cin >> s;
	cout<<first_element(arr,n,s);
}