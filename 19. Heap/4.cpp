//heap in the stl
#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={10,15,20,13,6,90};
	int n = sizeof(arr)/sizeof(int);
	priority_queue<int> heap1;// by default it is the max heap
	priority_queue<int , vector<int>,greater<int>> heap; // aa 2 parameter extra pass kariae ne aetle min heap thai jay 
	for(int x:arr){
		heap.push(x);
	}
	while(!heap.empty()){
		cout << heap.top() << endl;
		heap.pop();
	}
}