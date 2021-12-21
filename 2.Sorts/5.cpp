//counting sort 
//when data is in range then we can use this sort
// complexity O(n) linear + range in terms of the range
//if data in the range complexity  O(n)
#include <bits/stdc++.h>
using namespace std;
void counting_sort(int a[], int n){
	//largest element
	int largest = INT_MIN;
	for(int i = 0; i<n; i++){
		largest = max(largest,a[i]);
	}
	//creating the count array/vector
	vector<int> freq(largest+1,0);

	//update the frequent array
	for (int i = 0; i < n; i++)
	{
		freq[a[i]]++;
	}
	//put back the elements from freq into original array
	int j = 0;
	for (int i = 0; i <= largest; ++i)
	{
		while(freq[i]>0){
			a[j]=i;
			freq[i]--;
			j++;
		}
	}
	return;
}
int main(){
	int arr[] = {1,0,56,3,5,7,2222222};
	int n = sizeof(arr)/sizeof(int);
	counting_sort(arr,n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] <<" ";
	}
	return 0;
}