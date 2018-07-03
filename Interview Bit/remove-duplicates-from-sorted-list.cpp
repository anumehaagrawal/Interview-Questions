ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *node = A;
    while(A->next!=NULL && A->next->next!=NULL){
        if(A->val == A->next->val){
            A->next = A->next->next;
        }
        else{
            
        
        A=A->next;
        }
    }
    if(A->next!=NULL && A->next->val==A->val){
        A->next=NULL;
    }
    return node;
}