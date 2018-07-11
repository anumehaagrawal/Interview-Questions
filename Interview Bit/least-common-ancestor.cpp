/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* locate(TreeNode * A,int B,int C){
    if(!A){
        return NULL;
    }
    if(A->val==B || A->val==C){
        return A;
    }
    TreeNode *l = locate(A->left,B,C);
    TreeNode *r = locate(A->right,B,C);
    if(l&&r){
        return A;
    }
    return l?l:r;
}
int find(TreeNode* A,int num){
    if(!A){
        return 0;
    }
    if(A->val==num){
        return 1;
    }
    return find(A->left,num)||find(A->right,num);
}

int Solution::lca(TreeNode* A, int B, int C) {
    if(!find(A,B) || !find(A,C)){
        return -1;
    }
    TreeNode *lca = locate(A,B,C);
    return lca->val;
    
   
}