//linear search
#include <iostream>
using namespace std;
void linear_search(int *arr,int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			cout<<"key is found in the array"<<endl;
			break;
		}	
	}
	cout<<"key is not found in the array";
}
int main(){
	int n,key;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>key;
	linear_search(arr,n,key);
}