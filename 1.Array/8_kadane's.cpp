#include<iostream>
using namespace std;
int maximum_subarray_sum(int *arr,int n){
	int cs = 0; 
	//current sum
	int largest = 0;
	 //largest sum
	for (int i = 0; i < n; ++i)
	{
		cs=cs+arr[i];
		if(cs < 0){
			cs = 0;
		}
		largest = max(largest, cs);
	}
	return largest;
}
int main()
{
	//array containing
	int arr[]={4,5,6,7,8,9,10,11,12};
	int n = sizeof(arr)/sizeof(int);
	cout<< maximum_subarray_sum(arr,n) <<endl;
}