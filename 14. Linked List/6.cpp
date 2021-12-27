//find the mid of the ll
//so here we are taking the two pointers
//one is fast and second one is slow
//slow pointer pass one and fast one passes the two pass
//when fast reaches the end at that time slow one will reach at the mid
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
Node * middleNode(Node * head){
	Node * slow = head;
	Node * fast = head->next;
	while(fast && fast->next){
		slow = slow->next;
		fast = fast->next->next;
	}
	if(fast){ //even
		return slow->next;
	}
	return slow; //odd
}
void print(Node * head){
	Node * temp = head;
	while(temp!=NULL){
		cout << temp->data <<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}
int main(){
	Node * head = takeInput();
	print(head);
	Node * output = middleNode(head);
	print(output);

}