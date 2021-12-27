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
void print(Node * head){
	Node * temp = head;
	while(temp!=NULL){
		cout << temp->data <<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}
int length(Node * head){
	int count = 0;
	Node * temp = head;
	while(temp!=NULL){
		count++;
		temp = temp->next;
	}
	return count;
}
void returnIthElement(Node * head,int i){
	Node * temp = head;
	for(int j=0;j<i;j++){
		if(temp==NULL){
			return;
		}
		temp = temp->next;
	}
	cout << temp->data << endl;
}
// Node * insertAtIthElement(Node * head,int i,int insert){
// 	Node * temp = head;
// 	for(int j=0;j<i;j++){
// 		if(temp==NULL){
// 			return;
// 		}
// 		temp = temp->next;
// 	}
// 	Node * n = new Node(insert);
// 	n->next = temp->next;
// 	temp->next = n;
// 	return head;
// }
Node * takeInput(){
	//no constraint in the size
	int data;
	cin >> data;
	Node * head = NULL; //ll is empty
	Node * tail = NULL; //LL is empty 
	while(data!=-1){
		//creating LL
		//here we can not create LL staticaly because it is valid till the itration
		//so we have to use the dyanmicaly
		Node * n = new Node(data);
		//1st node or not
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
Node * takeInputReverse(){
	//no constraint in the size
	int data;
	cin >> data;
	Node * head = NULL; //ll is empty
	Node * tail = NULL; //LL is empty 
	while(data!=-1){
		//creating LL
		//here we can not create LL staticaly because it is valid till the itration
		//so we have to use the dyanmicaly
		Node * n = new Node(data);
		//1st node or not
		if(head==NULL){
			head = n;
			tail = n;
		}else{
			n->next = head;
			head = n;
		}
		cin >> data;
	}
	return head;
}
int main(){
	Node * head = takeInput();
	Node * head2 = takeInputReverse();
	print(head);
	print(head2);
	// insertAtIthElement(head,2,4);
	// print(head);
	// returnIthElement(head,3);
	// int x= length(head);
	// cout << x << endl;
	return 0;
	
}