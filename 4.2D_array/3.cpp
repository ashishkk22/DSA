//sprial order printing
#include <iostream>
using namespace std;
void print(int arr[][4] , int n ,int m){
	//here we have to take four variable
	int startRow = 0;
	int endRow = n-1;
	int startCol = 0;
	int endCol = m-1;
	//outer loop
	while(startCol <= endCol and startRow <= endRow){
		//start row
		for (int col = startCol; col <=endCol; col++)
		{
			cout << arr[startRow][col]<< " ";
		}
		//end col
		for (int row = startRow+1; row<=endRow;row++)
		{
			cout << arr[row][endCol]<<" ";
		}
		//end row
		for (int col = endCol - 1 ; col >=startCol; col--)
		{
			//avoid duplicate printing of elements
			if(startRow==endRow){
				break;
			}
			cout << arr[endRow][col] << "" ;
		}
		//start colmun
		for (int row = endRow - 1; row>=startRow+1 ; row--)
		{
			//avoid duplicate printing of elements
			if(startCol==endCol){
				break;
			}
			cout << arr[row][startCol] <<" ";
		}
		//update the variable so that they point to the inner spiral
		startRow++;
		endRow--;
		startCol++;
		endCol--;
	}
}
int main(){
	int n,m;
	cin >> n >> m;
	int arr[4][4];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> arr[i][j];
		}
	}
	print(arr,n,m);

}