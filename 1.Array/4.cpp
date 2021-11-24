//binary search
#include <iostream>
using namespace std;
int linear_search(int *arr,int n,int key){
	int start=0;
	int end=n-1;
    while(start<=end){
    	int mid=(start+end)/2;
    	if(arr[mid]==key){	
    		return 1;
    	}else if(arr[mid]>key){
    		end=mid-1;
    	}else {
    		start=mid+1;
    	}
    }
	return -1;
}
int main(){
	int n,key;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>key;
	int ans=linear_search(arr,n,key);
	if(ans==1){
		cout<<"key is found"<<endl
	};
	else{
		cout<<"key is not found"<<endl;
	}
}