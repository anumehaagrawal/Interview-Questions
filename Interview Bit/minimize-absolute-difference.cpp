int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int minn = 9999999;
    int i=0;
    int j=0;
    int k=0;
    while(i<A.size() && j<B.size() && k<C.size()){
        int mini = min(min(A[i],B[i]),C[i]);
        int maxi = max(max(A[i],B[i]),C[i]);
        int diff = maxi-mini;
        minn = min(minn,abs(diff));
        if(mini == A[i]){
            i++;
        }
        else if(mini == B[i]){
            j++;
        }
        else{
            k++;
        }
    }
    return minn;

}
