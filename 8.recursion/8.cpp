//bubble sort
#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int a[],int n){
	//base case
	if(n==1){
		return;
	}
	//rec case
	for (int j = 0; j < n-1; ++j)
	{
		if(a[j] > a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	bubble_sort(a,n-1);
}
int main(){
	int arr[] = {3,4,6,3,22,5,22,46,7,54};
	int n = sizeof(arr)/sizeof(int);
	cout << n << endl;
	bubble_sort(arr,n);
	for(int x :arr){
		cout << x <<" ";
	}
}