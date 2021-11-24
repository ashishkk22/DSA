//reverse the array
#include <iostream>
using namespace std;
void reverse_array(int arr[],int n){
	int s=0;
	int e=n-1;
	while(s < e){
		swap(arr[s],arr[e]);
		s++;
		e--;
	}
}
int main(){
	int arr[]={4,5,6,7,8,9,10,11,12};
	int n=sizeof(arr)/sizeof(int);
	reverse_array(arr,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<endl;
	}
}