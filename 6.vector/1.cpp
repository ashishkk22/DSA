#include <bits/stdc++.h>
using namespace std;
int main(){
	//Demo vector (array reperesntation)
	//vector<int> arr = {1,2,3,4,5};

	//fill consturctor
	std::vector<int> arr(10,7); //here we will get 10 value vector with initialized with 7

	//pop back => it is going to remove element 5
	arr.pop_back();

	// Push_back 0(1)
	arr.push_back(15);

	//print all the elements
	for (int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for(int x : arr){
		cout << x << " ";
	}

	//size of the vector
	cout << arr.size() << endl;

	//capacity of the vector
	cout << arr.capacity() << endl;
}