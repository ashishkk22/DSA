//printing the pairs
#include <iostream>
using namespace std;
void printing_pairs(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			cout<<"("<<arr[i]<<" , "<<arr[j]<<")"<<endl;
		}
	}
}
int main(){
	int arr[]={4,5,6,7,8,9,10,11,12};
	int n=sizeof(arr)/sizeof(int);
	printing_pairs(arr,n);
}