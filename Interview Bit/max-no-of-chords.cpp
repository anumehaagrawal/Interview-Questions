int maxchord(int A){
    long long n = 2*A;
    long long dp[n+1];
    for(long long i=0;i<n+1;i++){
        dp[i]=0;
    }
    dp[0]=1;
    dp[2]=1;
    for(long long i=4;i<=n;i+=2){
        for(long long j=0;j<i-1;j+=2){
            dp[i]=(dp[i]%100000007+(dp[i-2-j]*dp[j])%100000007)%1000000007;
        }
    }
    return int(dp[n]);
}
int Solution::chordCnt(int A) {
    return maxchord(A);
}

