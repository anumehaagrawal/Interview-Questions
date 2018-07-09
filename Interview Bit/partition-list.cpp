ListNode* Solution::partition(ListNode* A, int B) {
    ListNode *head1, *head2, *start;
    ListNode* temp;
    head1 = new ListNode(-1);
    head2= new ListNode(-1);
    start = head1;
    temp = head2;
    
    
    while(A!=NULL){
        
        if(A->val >=B){
            head2->next = new ListNode(A->val);
            head2=head2->next;
            
        }
        else{
            head1->next=new ListNode(A->val);
            head1=head1->next;
        }
        A=A->next;
    }
    head1->next=temp->next;
    return start->next;
    
}