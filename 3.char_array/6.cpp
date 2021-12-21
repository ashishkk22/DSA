#include <bits/stdc++.h>
using namespace std;
int main(){
	char a[1000] = "1ewgle";
	char b[1000];
	//calc length
	cout << strlen(a) << endl;
	//str copy
	strcpy(b,a);
	cout << b << endl;
	//strcat
	char web[] ="www.";
	char domain[] = "google.com";
	cout << strcat(web,domain) << endl;
	//str compare
	cout << strcmp(a,b) << endl;
	cout <<strcmp(web,domain) << endl;

}