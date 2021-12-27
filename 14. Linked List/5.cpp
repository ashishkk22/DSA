#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node * next;
	Node(int data){
		this->data = data;
		next = NULL;
	}
};
int lengthRec(Node * head){
	if(head==NULL) return 0;
	int smallAns = lengthRec(head->next);
	return 1 + smallAns;
}
Node * takeInput(){
	int data;
	cin >> data;
	Node * head = NULL;
	Node * tail = NULL;
	while(data!=-1){
		Node * n = new Node(data);
		if(head==NULL){
			head = n;
			tail = n;
		}else{
			tail->next = n;
			tail = n;
		}
		cin >> data;
	}
	return head;
}
bool isPresent(Node * head, int data){
	Node * curr = head;
	while(curr!=NULL){
		if(curr->data == data){
			return true;
		}
		curr = curr->next;
	}
	return false;
}
int main(){
	Node * head = takeInput();
	int ak = lengthRec(head);
	cout << ak <<endl;
	cout <<isPresent(head,4) << endl;
	return 0;

}