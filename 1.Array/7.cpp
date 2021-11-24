//printing the sub array and calulate the sum of that
//and find out the largest sum 
#include <iostream>
using namespace std;
void printingSubArray(int *arr, int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			for (int k = i; k <= j; ++k)
			{
				cout<<arr[k]<<",";
			}
			cout<<endl;
		}
	}
}
void sunOfPairs_largestSum1(int *arr, int n){
	int large=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int sum=0;
			for (int k = i; k <= j; ++k)
			{
				sum=sum + arr[k];
				if(k==j){
					cout<<sum;
				}
			}
			cout<<" ";
			if(sum>large){
				large=sum;
			}
		}
		cout<<endl;
	}
	cout<<large;
}
//prefix sum approch 0(n^2)
void sunOfPairs_largestSum2(int *arr, int n){
	//prefix sums
	int prefix[n]={0};
	prefix[0]=arr[0];
	for (int i = 1; i < n; ++i)
	{
		prefix[i]=prefix[i-1]+arr[i];
	}
	//largest sum logic
	int large=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int sum=i>0 ? prefix[j]-prefix[i-1] : prefix[j];
			if(sum>large){
				large=sum;
			}
		}
	}
	cout<<large;
}

int main(){
	int arr[]={4,5,6,7,8,9,10,11,12};
	int n=sizeof(arr)/sizeof(int);
	printingSubArray(arr,n);
	sunOfPairs_largestSum2(arr,n);
}