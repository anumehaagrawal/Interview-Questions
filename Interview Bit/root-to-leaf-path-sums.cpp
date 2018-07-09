void recurse(TreeNode* A,int sum,vector<int> temp,vector<vector<int>> &v){
    if(sum==0 && !A->left && !A->right){
        v.push_back(temp);
    }
    if(A->right){
        temp.push_back(A->right->val);
        recurse(A->right,sum - A->right->val,temp,v);
        temp.pop_back();
    }
    if(A->left){
        temp.push_back(A->left->val);
        recurse(A->left,sum- A->left->val,temp,v);
        temp.pop_back();
    }
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int>> v;
    vector<int> temp;
    if(!A)
    return v;
    temp.push_back(A->val);
    recurse(A,B-A->val,temp,v);
    return v;
}