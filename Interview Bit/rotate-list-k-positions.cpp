ListNode* Solution::rotateRight(ListNode* A, int k) {
    int count =0;
    ListNode *temp = A;
    if(A->next==NULL){
        return A;
    }
    while(temp!= NULL){
        count++;
        temp=temp->next;
    }
    int n=0;
    temp=A;
    while(n<count-k-1){
        temp=temp->next;
        n++;
    }
    ListNode* head = temp->next;
     ListNode* headt =new ListNode(0);
    temp->next = NULL;
    if(head!=NULL){
        headt->next = head;
        while(head->next!=NULL){
            head=head->next;
        }
        head->next=A;
    }
    return headt->next;
}
