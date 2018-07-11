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
    return 1 + max(height(A->left),height(A->right));
}
void level(TreeNode* A, vector<pair<int,int>> &v){
    if(!A){
        return;
    }
    level(A->left,v);
    v.push_back(make_pair(A->val,height(A)));
    level(A->right,v);
    
  
}
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    vector<pair<int,int>> v1;
    vector<pair<int,int>> v2;
    level(A,v1);
    level(B,v2);
    if(v1==v2){
        return 1;
    }
    return 0;
    
    
}
