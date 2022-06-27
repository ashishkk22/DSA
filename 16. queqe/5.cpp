//reverse a queue 
#include <bits/stdc++.h>
using namespace std;
void reverse(queue<int> &q){
	stack<int> s;
	while(!q.empty()){
		s.push(q.front());
		q.pop();
	}
	//q empty stack is full
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}
}
int main(){
	queue<int> q;
	for(int i = 0; i<=5 ; i++){
		q.push(i);
	}
	reverse(q);
	while(!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}