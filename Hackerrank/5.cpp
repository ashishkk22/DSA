//reverse linked list
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
        cout << temp->data <<endl; 
        temp = temp->next;
     }  
}
Node * linkeList(Node* head,int data){
        head =  new Node(data);
        return head;
}
int main(){
	int size;
	cin >> size;
	stack<int> a;
	for(int i = 0; i<size;i++){
		int ak;
		cin >> ak;
		a.push(ak);
	}
	Node * temp;
	Node * head;
	for (int i = 0; i < size; ++i)
	{
		int ak ;
		ak = a.top();
		a.pop();
		if(i==0){
			head = new Node(ak);
			temp = head;
		}else{
		head->next = linkeList(head,ak);
		head = head->next;
	}
	}
	printLL(temp);
}
