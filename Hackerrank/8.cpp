SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode * temp = NULL;
    SinglyLinkedListNode * ret = temp;
    while(head1 != NULL and head2 != NULL){
        if(head1->data < head2->data){
            SinglyLinkedListNode * n = new SinglyLinkedListNode(head1->data);
            temp->next = n;
            temp = temp->next;
            head1 = head1->next;
            SinglyLinkedListNode * m = new SinglyLinkedListNode(head2->data);
            temp->next = m;
            temp = temp->next;
            head2 = head2->next;
        }else{
            SinglyLinkedListNode * n = new SinglyLinkedListNode(head2->data);
            temp->next = n;
            temp = temp->next;
            head2 = head2->next;
            SinglyLinkedListNode * m = new SinglyLinkedListNode(head1->data);
            temp->next = m;
            temp = temp->next;
            head1 = head1->next;
        }
    }
    if(head1!=NULL){
        temp = head1;
    }
    if(head2!=NULL){
        temp = head2;
    }
    return ret;
}