ListNode* Solution::sortList(ListNode* A) {
    vector<int> s;
    ListNode *curr;
    while(A!=NULL){
       s.push_back(A->val);
       curr=A;
       A=A->next;
       free(curr);
    }
    sort(s.begin(),s.end());
    ListNode *temp = new ListNode(-1);
    ListNode *start;
    start = temp;
    int count =0;
    while(count<s.size()){
        
        temp->next=new ListNode(s[count]);
        count++;
  
        temp=temp->next;
    }
    return start->next;
}