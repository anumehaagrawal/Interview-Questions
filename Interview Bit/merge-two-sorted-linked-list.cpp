ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
 
    ListNode* temp=new ListNode(0);
    ListNode *st = temp;
    while(A!=NULL && B!=NULL){
        if(A->val < B->val){
            temp->next = new ListNode(A->val);
            A=A->next;
        }
        else{
            temp->next=new ListNode(B->val);
            B=B->next;
        }
    
        temp=temp->next;
    }
    while(A!=NULL){
        temp->next=new ListNode(A->val);
        A=A->next;
     
        temp=temp->next;
    }
    while(B!=NULL){
        temp->next=new ListNode(B->val);
        B=B->next;
        
        temp=temp->next;
    }
    return st->next;
    
}