#include <iostream>
#include "stackLL.h"
using namespace std;
int main(){
	Stack<char> s;
	s.push('a');
	s.push('s');
	s.push('h');
	s.push('i');
	s.push('s');
	s.push('h');
	while(!s.empty()){
		cout << s.top()<<endl;
	}
}