 void preorder(TreeNode* A,vector<int>& v){
     if(!A){
         return ;
     }
     preorder(A->left,v);
     v.push_back(A->val);
     preorder(A->right , v);
 }
int Solution::isSymmetric(TreeNode* A) {
    vector<int> v;
    preorder(A,v);

    for(int i=0;i<v.size();i++){
        if(v[i]!=v[v.size()-1-i]){
            return 0;
        }
    }
    return 1;
}