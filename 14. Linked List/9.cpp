class Solution{
public:
	ListNode* merge(ListNode* l1,ListNode* l2){
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        if(l1->val < l2->val){
            l1->next = merge(l1->next,l2);
            return l1;
        }
        else{
            l2->next = merge(l1,l2->next);
            return l2;
        }  
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      return merge(list1,list2);
  }
	ListNode* sortList(ListNode* head){
		if(head==NULL || head->next==NULL) return head;
		//break list in to two list
		ListNode * slow = head;
		ListNode * fast = head->next->next;
		while(fast && fast->next){
			slow = slow->next;
			fast = fast->next->next;
		}
		ListNode *n = slow->next;
		slow->next = NULL;
		ListNode *a = sortList(head);
		ListNode *b = sortList(n);
		head = mergeTwoLists(a,b);
		return head;
	}
}