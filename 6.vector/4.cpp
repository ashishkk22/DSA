//find or search function in the stl vector
//this is linear search not a binary search
//visit cplusplue com for more knowledge about the method
#include <bits/stdc++.h>
using namespace std;
int main(){
	std::vector<int> v = {10,12,2,12,3,32,33};

	int key;
	cin >> key;

	vector<int>::iterator it = find(v.begin(),v.end(),key);

	//cout << it; //returning the address
	//it is possible that element is not present

	if(it!=v.end()){
		cout <<"Present at index " <<  it - v.begin();
	}
	else{
		cout << "Element is not found";
	}
}