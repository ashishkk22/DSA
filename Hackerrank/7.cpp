//delete the nodes
//insert at the i th element
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
void printLL(Node * head){ 
    Node * temp = head; 
    while(temp!=NULL){ 
        cout << temp->data <<" "; 
        temp = temp->next;
     }  
}
Node * linkeList(Node* head,int data){
        head =  new Node(data);
        return head;
}
void deleteAtIth(Node * head , int count){
	if(head == NULL){
		return;
	}
	for(int i = 0;i<count;i++){
		if(head == NULL){
			return;
		}
		head = head->next;
	}
	if(count>=0){
	Node * temp = head->next;
	n->next = head->next;
	head->next = n;
}
}
int main(){
int size;
    cin >> size;
    Node * temp;
    Node * head;
    for (int i = 0; i < size; ++i)
    {
        int ak;
        cin >> ak;
        
        if(i==0){
        head = new Node(ak);
        temp = head;
    }else{
        head->next = linkeList(head,ak);
        head = head->next;
    }
    }
    int position;
    cin >> position;
    position = position-1;
    insertAtIth(temp,position);
    printLL(temp);
}