#include <bits/stdc++.h>
using namespace std;
bool solveSudoku(int mat[][9],int n , int j ,int n){
	//base case
	if (i==n)
	{
		//print the solution later
		return true;
	}
	//rec case
	if(j==n){
		return solveSudoku(mat,i+1,0,n);
	}
	//skip the prefilled cell
	if (mat[i][j]!=0)
	{
		return solveSudoku(mat,i,j+1,n);
	}
	//cell to be filled
	//try out all possibilties
	for (int no = 1; no <= n; ++no)
	{
		//whether it is safe to place the number or not
		if ()
		{
			/* code */
		}
	}
}
//not completed
int main(){
	int n = 9;
	int mat[9][9]={
		{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}
	};
	if(!solveSudoku(mat,0,0,n)){
		cout << "No solution exists!" << endl;
	}
}