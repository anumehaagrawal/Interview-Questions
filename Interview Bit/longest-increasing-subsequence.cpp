int Solution::lis(const vector<int> &A) {
    int dp[A.size()+1];
    int maxlen=1;
    memset(dp,0,sizeof(dp));
    for(int i=0;i<A.size();i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(A[i]>A[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        maxlen=max(maxlen,dp[i]);
    }
    return maxlen;
}
