#include <iostream>
using namespace std;
int main(){
	char sentence[1000];
	cin.getline(sentence,1000, '#'); //if we have to set like stop at # then add third para #
	cout << sentence << endl;
}