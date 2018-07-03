ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
   ListNode *temp = A;
   int count =0;
   if(A->next==NULL && B==1){
       temp=NULL;
       return temp;
   }
   while(temp!=NULL){
       count++;
       temp=temp->next;
   }
   int n=0;
   ListNode *st= A;
   if(B==count || B>count){
      return st->next;
   }
   while(n<count-B-1){
       A=A->next;
       n++;
   }
   if(A->next->next!=NULL){
       A->next = A->next->next;
   }
   else{A->next = NULL;
   }
   return st;
    
}
