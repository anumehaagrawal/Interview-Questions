/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 int compare(TreeNode* A){
     if(!A){
         return 0;
     }
     if(!A->left && !A->right){
         return 1;
     }
     int h1 = 1+compare(A->right);
     int h2 = 1+compare(A->left);
     if(h1<0 || h2<0){
         return INT_MIN;
     }
     if(abs(h1-h2)>1){
         return INT_MIN;
     }
     return max(h1,h2);
 }
int Solution::isBalanced(TreeNode* A) {
    if(compare(A)<0){
        return 0;
    }
    return 1;
}
