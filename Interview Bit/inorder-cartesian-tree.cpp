/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int findIndex(vector<int>& A,int start,int end){
     int maxn = A[start];
     int maxInd = start;
     for(int i=start;i<=end;i++){
         if(maxn<A[i]){
             maxn = A[i];
             maxInd = i;
         }
     }
     return maxInd;
 }
TreeNode* build(vector<int>& A,int start,int end){
    if(start>end){
        return NULL;
    }
    int maxIn = findIndex(A,start,end);
    TreeNode* root = new TreeNode(A[maxIn]);
    root->left = build(A,start,maxIn-1);
    root->right = build(A,maxIn+1,end);
    return root;
}
TreeNode* Solution::buildTree(vector<int> &A) {
    int start =0;
    int end = A.size()-1;
    build(A,start,end);
}
