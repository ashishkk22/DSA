#include <bits/stdc++.h>
using namespace std;
string encryption(string input,int key){
	int n = input.length();
	char a[key][n];
	int b,y,x;
	y = x = b =0;
	for (int i = 0; i < key; i++){
		for (int j = 0; j < n; j++){
			a[i][j]='-';
		}
	}
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
	string ak;
	for (int i = 0; i < key; i++){
		for (int j = 0; j < n; j++){
		    if(a[i][j]=='-'){
		    	continue;
		    }else{
		    ak = ak + a[i][j];
		    }
		}
	}
	cout <<"Encrypted Text : " << ak << endl;
	cout << "-----Encryption matrix-----" << endl;
	for (int i = 0; i < key; i++){
		for (int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return ak;
}
void decryption(string input,int key){
	int n = input.length();
	char a[key][n];
	int b,y,x;
	y = x = b =0;
	for (int i = 0; i < key; i++){
		for (int j = 0; j < n; j++){
			a[i][j]='-';
		}
	}
    while(b<n){
		while(x<key && b<n){
            a[x][y++] = '*';
            b++;
            x++;
		}
		x--;
		x--;
		while(x>0 &&b<n){
            a[x--][y++] = '*';
            b++;
		}
	}
	int p = 0;
	cout << "-----Decryption Matrix-----" << endl;
	for (int i = 0; i < key; i++){
		for (int j = 0; j < n; j++){
			if(a[i][j]=='*'){
				a[i][j] = input[p++];
			}
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	y = x = b =0;
	string ak;
	while(b<n){
		while(x<key && b<n){
           ak = ak + a[x][y++] ;
            b++;
            x++;
		}
		x--;
		x--;
		while(x>0 &&b<n){
            ak = ak + a[x--][y++];
            b++;
		}
	}	
	cout <<"Decrypted Text : " << ak << endl;
}
int main(){
	string input;
	getline(cin,input);
	int key;
	cin >> key;
	cout << "-----19DCS046-----" << endl;
	string ak = encryption(input,key);
	cout << endl;
	decryption(ak,key);
}