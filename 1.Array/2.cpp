#include <iostream>
using namespace std;
void printArray(int *arr,int n){
	cout<<"in the function "<<sizeof(arr)<<endl;
	cout<<"in the function "<<sizeof(int)<<endl;
	cout<<"in the function "<<n<<endl;
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(int);
	cout<<"in the main function "<<sizeof(arr) <<endl;
	cout<<"in the main function "<<sizeof(int)<<endl;
	printArray(arr,n);
	return 0;
}