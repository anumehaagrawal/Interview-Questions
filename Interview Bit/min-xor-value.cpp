int Solution::findMinXor(vector<int> &A) {
    int minn = INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++){
        minn = min(minn,A[i]^A[i+1]);
    }
    return minn;
}
