/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int height(TreeNode* A){
    if(!A){
        return 0;
    }
    if(!A->left && A->right){
        return 1+height(A->right);
    }
    else if(!A->right && A->left){
        return 1+height(A->left);
    }
    else{
        int r=height(A->right);
        int l=height(A->left);
        if(r>l){
            return l;
        }
        else{
            return r;
        }
        
    }
    
   
}
int Solution::minDepth(TreeNode* A) {
    int h=0;
    return height(A);
}
