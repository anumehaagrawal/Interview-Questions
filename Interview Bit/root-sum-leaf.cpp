int sumRoot(TreeNode* A,int sum){
    if(!A){
        return 0;
    }
    sum = ((sum*10)%1003 + A->val%1003)%1003;
    if(!A->right && !A->left){
        return sum%1003;
    }
    return (sumRoot(A->right,sum)%1003+sumRoot(A->left,sum)%1003)%1003;
}

int Solution::sumNumbers(TreeNode* A) {
    return sumRoot(A,0);
}