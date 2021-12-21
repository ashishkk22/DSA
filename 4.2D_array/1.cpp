#include <iostream>
using namespace std;
//here in the print function there must be the number of column
//passed by reference
void print(int arr[][100] , int n ,int m){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		} 
		cout << endl;
	}
}
int main(){
	int arr[100][100];
	int n,m;
	cin>>n>>m;
	//take input
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	// print the input
	print(arr,n,m);
	return 0;
}