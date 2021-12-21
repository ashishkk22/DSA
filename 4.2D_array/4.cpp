//staircase search
#include <iostream>
using namespace std;
pair<int,int> staircaseSearch(int arr[][4],int n,int m,int key){
	//Later if the element is not found return -1,-1
	if(key < arr[0][0] or key > arr[n-1][m-1]){
		return {-1,-1};
	}
	//staircase search
	int i=0;
	int j=m-1;
	while(i<n and j>=0){
		if(arr[i][j]==key){
			return {i,j};
		}
		else if(arr[i][j]>key){
			j--;
		}
		else{
			i++;
		}
	}
	return {-1,-1};
}
int main(){
	int arr[4][4];
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cin >> arr[i][j];
		}
	}
	int element;
	cin >> element;
	pair<int,int> answer = staircaseSearch(arr,4,4,element);
	cout << answer.first << " " <<answer.second <<endl;
}