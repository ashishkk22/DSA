#include <iostream>
using namespace std;
void change(int arr[],int n){
    for (int i = 0; i < n-1; ++i)
    {
    	if(arr[i]<0){
    		continue;
    	}else{
    		swap(arr[i],arr[i+1]);
    	}
    }
}
int main() {
	int n;
	cin >>n;
	int arr[n];
	for(int i=0; i<n; i++){
	    cin >> arr[i];
	}
	for(int i=0; i<n; i++){
	    cout<<arr[i] << " ";
	}
	change(arr,n);
	for(int i=0; i<n; i++){
	    cout<<arr[i] << " ";
	}
	return 0;
}