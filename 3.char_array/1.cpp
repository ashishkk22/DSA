#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[] = {'a','b','c','t','r','q','e','y','\0'};
	//or
	char a2[] = "ashish";
	cout << a2 << endl;
	cout << a << endl;
	cout << strlen(a) <<endl; //no of visible char
	cout << sizeof(a) << endl; // +1 because of the null char
	
}