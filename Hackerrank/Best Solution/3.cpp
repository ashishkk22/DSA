//fast and slow pointer
//bool detect cycle in the linked list
bool detectCycle(Node * head){
	Node * slow = head;
	Node * fast = head;
	while(fast!=NULL and fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
		if(fast==slow){
			return true;
		}
	}
	return false;
}

///floy'd algo ae remove cycle karva nu kai rite karva nu
//jyare banne pointer same thay tyare banne mathi 1 ne start par lai java nu
//ane pachi bijo tyane tyaj re ane tyar bad banne 1 1 step challava no
//ane jyare banne no next node same thay tyare oll pointer ne null karideva no
//aetle thai jay
void removeCycle(Node * head){
	Node * slow = head;
	Node * fast = head;
	do{
		slow = slow->next;
		fast = fast->next->next;
	}while(slow!=fast)
	fast = head;
	while(slow->next!=fast->next){
		slow = slow->next;
		fast = fast->next;
	}
	slow->next = NULL;
}