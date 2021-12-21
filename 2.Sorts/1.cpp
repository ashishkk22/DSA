//bubble sort
#include <iostream>
using namespace std;
void bubble_sort(int a[], int n){
	for(int times=1; times<=n-1; times++){
		//repeated swapping
		for (int i = 0; i <= n-times-1; ++i)
		{
			if(a[i] > a[i+1]){
				swap(a[i],a[i+1]);
			}
		}
	}
}
int main(){
	int arr[] = {-2,3,4,-1,-5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(n);
	bubble_sort(arr,n);
	for(auto x : arr){
		cout<<x<<" , ";
	}
	return 0;
}