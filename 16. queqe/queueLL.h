class Node{
public:
	int data;
	Node * next;
	Node(int data){
		this->data = data;
		next = NULL;
	}
};
class Queue{
	Node * head;
	Node * tail;
	int size;
public:
	Queue(){
		head = NULL;
		tail = NULL;
		size = 0; 
	}
	int getSize(){
		return size;
	}
	bool isEmpty(){
		return size==0;
	}
	void push(int ele){
		Node * n = new Node(ele);
		if(head == NULL){
			head = n;
			tail = n;
		}else{
			tail->next = n;
			tail = n;
		}
		size++;
	}
	int front(){
		if (isEmpty())
		{
			return 0;
		}
		return head->data;
	}
	void pop(){
		if(isEmpty()){
			return;
		}
		Node * temp = head ;
		head = head->next;
		temp->next = NULL;
		delete temp;
		size--;
	}
};