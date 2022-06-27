//stock span problem
#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[] = {100,80,60,70,60,75,85};
	int n = sizeof(arr)/sizeof(int);
	int temp[n] = {0};
	temp[0] = 0;
	for (int i = 1; i < n; i++){
	 	for (int j = i; j <=0 ; j--){
	 		if(arr[i]<arr[j-1]){
	 			temp[i] = (i)-(j-1);
	 			break;
	 		}
	 	}
	} 
	for (int i = 0; i < n; ++i)
	{
		cout << temp[i] << endl;
	}
}