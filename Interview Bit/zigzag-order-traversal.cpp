
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int>> out;
    stack<TreeNode*> cur_lay;
    cur_lay.push(A);
    stack<TreeNode*> next_lay;
    int flag=0;
    vector<int> nodes;
    while(!cur_lay.empty()){
        TreeNode* temp = cur_lay.top();
        cur_lay.pop();
        nodes.push_back(temp->val);
        if(flag==0){
            if(temp->left){
                next_lay.push(temp->left);
            }
            if(temp->right){
                next_lay.push(temp->right);
            }
        }
        else{
            if(temp->right){
                next_lay.push(temp->right);
            }
            if(temp->left){
                next_lay.push(temp->left);
            }
        }
        if(cur_lay.empty()){
            out.push_back(nodes);
            nodes.clear();
            cur_lay.swap(next_lay);
            if(flag==0){
                flag=1;
            }
            else{
                flag=0;
            }
        }
    }
    return out;
    
    
}
