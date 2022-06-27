//heap in the stl
#include <bits/stdc++.h>
using namespace std;
class Compare{
public:
	bool operator()(int a,int b){
			//return a<b; // to max heap
		return a>b;
	}
};
int main(){
	int arr[]={10,15,20,13,6,90};
	int n = sizeof(arr)/sizeof(int);
	// priority_queue<int , vector<int>,greater<int>> heap; // aa 2 parameter extra pass kariae ne aetle min heap thai jay 
	//jo aa pde aavu complex na karvu hoy to khud nu compare function pan nakkhi sakiae
	priority_queue<int , vector<int>,Compare> heap;
	for(int x:arr){
		heap.push(x);
	}
	while(!heap.empty()){
		cout << heap.top() << endl;
		heap.pop();
	}
}