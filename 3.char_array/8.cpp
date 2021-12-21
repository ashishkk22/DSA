#include <iostream>
#include <string>
using namespace std;
int main(){
	//char s[1000] = {'1','2','4','3','a' ,'e','\0'};
	string s; //= "hello world"; //dynamic array
	getline(cin,s,'.');
	for(char ch : s){
		cout << ch << ",";
	
}	cout << s << endl; //or


}
