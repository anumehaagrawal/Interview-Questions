int Solution::maxSubArray(const vector<int> &A) {
    int sum =0;
    int maxn = -999999;
    for(int i=0;i<A.size();i++){
        maxn = max(maxn,A[i]);
        sum = max(maxn,sum+maxn);
    }
    return sum;
}
