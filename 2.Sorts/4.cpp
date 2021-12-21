#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b ){
	return a>b;
}
int main(){
	int arr[]={2,4,0,-1,3,22,33,11,4,5};
	int n = sizeof(arr)/sizeof(int);
	sort(arr,arr + n,compare);
	//compare is not a function call it is passing a function as parameter
	// reverse(arr, arr + n); //or we can use the compare   
	//print the output
	sort(arr,arr + n, greater<int>());
	// aa greater nu pan lakhi ne reverse ma lakhi sakiae
	for(int x:arr){
		cout<<x<<" ";
	}
	return 0;
}