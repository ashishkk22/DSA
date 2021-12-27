class Node{
	//node contain two below things
	int data;
	Node* next;

public:
	//so here data = d and by default pointer asign as null in this constructor
	Node(int d):data(d),next(NULL){}
};

class List{
	Node * head;
	Node * tail;
public:
	List():head(NULL),tail(NULL){}
	void push_front(int data){
		if(head==NULL){
			Node * n = new Node(data);
			head = tail = n;
		}
		else{
			Node * n = new Node(data);
			n->next = head;
			head = n;
		}
	}
}