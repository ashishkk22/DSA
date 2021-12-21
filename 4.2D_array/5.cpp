//mango tree problem
//goal : get the maximum mango tree
/*intput
0 1 1 0 0 0
1 0 0 1 1 0
0 1 0 0 0 0
0 1 1 0 0 1
1 0 0 1 1 0
0 1 0 0 0 0
*/
#include <iostream>
using namespace std;
void maximum_submatrix_tree(int arr[6][6],int sum[6][6]){
	for (int i = 1; i < 6; ++i)
	{
		sum[0][i] = arr[0][i] + sum[0][i-1];
	}
	for (int j = 0; j < 6; j++)
	{
		sum[j][0] = arr[j][0] + sum[j-1][0];
	}
	for(int i = 1; i<6; i++){
		for (int j = 1; j < 6; j++)
		{
			if(arr[i][j]==0){
				sum[i][j] = sum[i-1][j] + sum[i][j-1] -sum[i-1][j-1];
			}
			else{
				sum[i][j] = 1 + sum[i-1][j] + sum[i][j-1] -sum[i-1][j-1];
			}
		}
	}
}
void maximum_submatrix_sum(int sum[6][6]){
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6; j++)
		{
			
			int s1 = sum[i][j];
			int s2 = sum[i][5] - s1;
			int s3 = sum[5][j] - s1;
			int s4 = sum[5][5] - s1 - s2 -s3;
			if(s1==s2 && s2==s3){
				cout <<"{ " <<i <<" , "<<j<<" }"<<endl;
			}
			else if(s1==s2 && s2==s4){
				cout <<"{ " <<i <<" , "<<j<<" }"<<endl;
			}
			else if(s1==s3 && s3==s4){
				cout <<"{ " <<i <<" , "<<j<<" }"<<endl;
			}
			// cout << s1 << " " << s2 << " " <<s3 <<" " <<s4<<" "<<endl;
		}
	}
}
void print(int arr[6][6] , int n ,int m){
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
	int arr[6][6] = {0};
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			cin >> arr[i][j];
		}
	}
	int sum[6][6] = {0};
	maximum_submatrix_tree(arr,sum);
	print(sum,6,6);
	maximum_submatrix_sum(sum) ;
}