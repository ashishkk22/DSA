#include <iostream>
#include "queueLL.h"
using namespace std;
int main(){
	Queue q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);
	q.push(70);
	while(!q.isEmpty()){
		cout << q.front() << endl;
		// cout << q.getFront() << endl;
		q.pop();
	}
	return 0;
}