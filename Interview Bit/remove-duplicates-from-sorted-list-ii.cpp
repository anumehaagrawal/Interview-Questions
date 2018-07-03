/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
   ListNode *start = new ListNode(0);
  
   ListNode *curr=start;
    start->next=A;
   ListNode *temp;
   while(curr->next!=NULL){
       temp=curr->next;
       while(temp->next!=NULL && temp->val == temp->next->val){
           temp=temp->next;
       }
       if(curr->next==temp){
           curr=curr->next;
       }
       else{
           curr->next=temp->next;
       }
   }
   return start->next;
}
