#include <bits/stdc++.h>
using namespace std;
int main(){
	//2D array
	std::vector<std::vector<int>> arr = {
		{1,2,3},
		{1,2,3,4},
		{1,2,3},
		{1,2}
	};
	//vector<vector<int>> v;

	arr[0][0] += 10; //update

//printing the element
	for (int i = 0; i < arr.size(); ++i)
	{
		for(int number :arr[i]){
			cout << number << " ";
		}
		cout << endl;
	}

	
}