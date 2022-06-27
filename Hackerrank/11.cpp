//removing the duplicates from the ll
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
        SinglyLinkedListNode * temp = head;
        while(head->next!=NULL){
            int ak1 = head->data;
            int ak2 = head->next->data;
            cout << ak1 << " outside " << ak2 <<endl; 
            if (ak1 == ak2)
            {
            cout << ak1 << " " << ak2 <<endl;
                SinglyLinkedListNode * temp2 = head->next;
                head->next = head->next->next;
                temp2->next=NULL;
                delete temp2;
            }else{
                head = head->next;
                }
            
        }
        return temp;
}