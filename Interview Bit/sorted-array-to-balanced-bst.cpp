/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* solve(int left , int right , vector<int>& v){
     if(left>right){
         return NULL;
     }
        int mid = (left+right)/2;
        TreeNode *root = new TreeNode(v[mid]);
        root->left = solve(left,mid-1,v);
        root->right=solve(mid+1,right,v);
        return root;
     
 }
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    if(A.size()==0){
        return NULL;
    }
    if(A.size()==1){
        return new TreeNode(A[0]);
    }
    vector<int> v;
    for(int i=0;i<A.size();i++){
        v.push_back(A[i]);
    }
    return solve(0,A.size()-1,v);
}
