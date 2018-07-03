ListNode* Solution::swapPairs(ListNode* A) {
     if(A==NULL || A->next == NULL )return A;
     
         ListNode * temp = A->next->next;
         ListNode *B = A->next;
         A->next->next=A;
         A->next = swapPairs(temp);
         
     return B;
   
}
