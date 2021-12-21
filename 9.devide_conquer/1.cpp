//merge sort
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int s,int e){
	int i = s;
	int m = (s+e)/2;
	int j = m + 1;
	vector<int> temp;
	while(i<=m and j<=e){
		if(array[i] < array[j]){
			temp.push_back(array[i]);
			i++;
		}
		else{
			temp.push_back(array[j]);
			j++;
		}
	}
	//this loop
	
}
void merge_sort(vector<int> &arr , int s , int e){
		//base case
	if(s>=e){
		return;
	}
	//rec case
	int mid = (s+e)/2;
	merge_sort(arr,s,mid);
	merge_sort(arr,mid+1,e);
	return merge(arr,s,e);
	
}
int main(){
	vector<int> arr{5,3,4,643,24,6,85,35};
	int s = 0;
	int e = arr.size()-1;
	merge_sort(arr,s,e);
	for(int x : arr)
{
	cout << x << " ";
}

}