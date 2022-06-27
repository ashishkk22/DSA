#include <bits/stdc++.h>
using namespace std;
int main(){
	string input;
	cin >> input;
	int n = input.length();
	cout << n << endl;
	int key;
	cin >> key;
	cout << key << endl;
	char a[key][n];
	for (int i = 0; i < key; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j]=0;
		}
	}
	int b = 0;
	int y = 0;
	int x=0;
	while(b<n){
		while(x<key && b<n){
            a[x][y++] = input[b++];
            x++;
		}
		x--;
		x--;
		while(x>0 &&b<n){
            a[x--][y++] = input[b++];
		}
	}
	for (int i = 0; i < key; i++)
	{
		for (int j = 0; j < n; j++)
		{
		    if(isalpha(a[i][j])){
			cout << a[i][j];
		    }
		}
	}
	cout << endl;
	for (int i = 0; i < key; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}