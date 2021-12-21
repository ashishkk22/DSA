#include <iostream>
using namespace std;
//given a sentence count the number of alphabets , digits , 
//spaces in the sentence
int main(){
	//store and then count
	//read one by one and then count
	char ch;
	ch = cin.get();
	//count
	int alpha = 0;
	int space = 0;
	int digit = 0;
	while(ch!='\n'){
		if(ch>='o' and ch<='9'){
			digit++;
		}
		else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
			alpha++;
		}
		else if(ch==' ' or ch=='\t'){
			space++;
		}
		ch = cin.get();
	}
	cout << "total alphabets " << alpha << endl;
	cout << "total digit" << digit << endl;
	cout << "total space" << space << endl;
	return 0;
}