/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int pathsum(TreeNode* A,int B,int summ){
     if(!A){
         return 0;
     }
     summ=summ+A->val;
     if(!A->right && !A->left){
         return summ==B;
     }
     return pathsum(A->left,B,summ)||pathsum(A->right,B,summ);
     
 }
int Solution::hasPathSum(TreeNode* A, int B) {
    if(!A){
        return 0;
    }
    int summ =0;
    return pathsum(A,B,0);
}
