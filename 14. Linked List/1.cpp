//in the array and vector the memory is going to be continuous memory
//while in the linked list it is on demand memory
#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node *next;
	Node(int data){
		this->data=data;
		next = NULL;
	}
};
int main(){
	//statically
	Node n1(1);
	Node n2(2);
	n1.next = &n2;
	cout << n1.data <<" " <<n2.data<< endl;
	Node * head = &n1; //it is containing the address of the first node
	cout << head->data;  //it is derefrenece goto head address and print the data
	//dynamically
	Node *n3 = new Node(3);
	Node *n4 = new Node(4);
	n3->next = n4;
	return 0;
	
}