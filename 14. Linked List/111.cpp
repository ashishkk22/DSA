int findMergeNode(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB) {
    if(headA ==NULL or headB == NULL) return NULL;
    SinglyLinkedListNode * a = headA;
    SinglyLinkedListNode * b = headB;
    while(a!=b){
        a = a==NULL ? headB : a->next;
        b = b==NULL ? headA : b->next;
    }
    return a->data;
}