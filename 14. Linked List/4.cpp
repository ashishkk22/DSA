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
void insertAtIthElement(Node * head,int i,int insert){
	if(head==NULL){
			return;
		}
	for(int j=0;j<i;j++){
		if(head==NULL){
			return;
		}
		head = head->next;
	}
	if(i>=0){
	Node * n = new Node(insert);
	n->next = head->next;
	head->next = n;
}
}
Node * deleteIthElement(Node* head,int i){

	if(i<0){
		return head;
	}
	if(i==0 && head){
		Node * newHead = head->next;
		head->next=NULL;
		delete head;
		return newHead;
		//return head->next; //here we are returning the second node add and 1st node is going to delete
	}
	Node * curr = head;
	int count = 1;
	while(count<=i-1 && curr!=NULL){
		curr = curr->next;
		count++;
	}
	if(curr && curr->next){
		Node * temp = curr->next;
		curr->next = curr->next->next;
		temp->next = NULL;
		delete temp;
		return head;
	}
	return head;
}
int main(){
	Node * head = takeInput();
	print(head);
	insertAtIthElement(head,3,4);
	print(head);
	deleteIthElement(head,3);
	print(head); 
	return 0;
}