//problem : Read N strings and print the largest string.
//each string can have upto 1000 characters
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n; 
	cin.get();
	char sentence[1000];
	char largest[1000];
	int largest_len = 0;
	while(n--){
		cin.getline(sentence,1000);
		cout << sentence << endl;
		int len = strlen(sentence);
		if(len > largest_len){
			largest_len = len;
			strcpy(largest,sentence);
		}
	}
	cout << "Largest sentence is :" << largest << endl;
	return 0;
}