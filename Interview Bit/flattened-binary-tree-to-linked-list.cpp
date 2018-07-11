/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void preorder(TreeNode *A,vector<int> &v){
   if(!A){
       return;
   }
   v.push_back(A->val);
   preorder(A->left,v);
   preorder(A->right,v);
}
TreeNode* Solution::flatten(TreeNode* A) {
    if(!A)
        return A;
    vector<int> v;
    preorder(A,v);
    TreeNode *cur = new TreeNode(v[0]);
    TreeNode *temp= cur;
    for(int i=1;i<v.size();i++){
        cur->right =new TreeNode(v[i]);
        cur=cur->right;
    }
    return temp;
}