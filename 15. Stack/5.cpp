//challenge : Reverse the stack
#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &s,int data){
	if(s.empty()){
		s.push(data);
		return;
	}
	//rec case
	int temp = s.top();
	s.pop();
	insertAtBottom(s,data);
	s.push(temp);
}
void reverseInsert(stack<int> &s){
	if(s.empty()){
		return;
	}
	//rec case
	int temp = s.top();
	s.pop();
	reverseInsert(s);
	insertAtBottom(s,temp);
}
int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	while(!s.empty()){
		cout << s.top()<< endl;
		s.pop();
	}
	cout << "==========="<< endl;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	reverseInsert(s);
	while(!s.empty()){
		cout << s.top()<< endl;
		s.pop();
	}
	return 0;


}