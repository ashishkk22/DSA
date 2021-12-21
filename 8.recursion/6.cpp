//last occurence of the element
#include <bits/stdc++.h>
using namespace std;
int last_element(int arr[],int n , int s){
	if(n==0){
		return -1;
	}
	//rec case
	int subIndex = last_element(arr +1,n-1,s);
	if(subIndex==-1){
		if(arr[0]==s){
			return 0;
		}
		else{
			return -1;
		}
	}
	else{
		return subIndex + 1;
	}
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
	cout<<last_element(arr,n,s);
}