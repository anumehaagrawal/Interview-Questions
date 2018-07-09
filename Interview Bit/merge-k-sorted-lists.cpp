ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    priority_queue<int> pq;
    for(int i=0;i<A.size();i++){
        ListNode *temp = A[i];
        while(temp!=NULL){
            pq.push(temp->val);
            temp=temp->next;
        }
    }
    ListNode *head = new ListNode(0);
   
    while(!pq.empty()){
        if(head->next ==NULL){
            head->next = new ListNode(pq.top());
    
        }
        else{
            ListNode *tmp = head->next;
            ListNode* newd = new ListNode(pq.top());
            head->next = newd;
            newd->next = tmp;
        }
        pq.pop();
    }
    return head->next;
}