int Solution::paint(int A, int B, vector<int> &C) {
    long n = C.size();
    long k = (long)A;
    long dp[1000][1000];
    long cum[1000] = {0};
    for(long i=1;i<=n;i++){
        cum[i] = cum[i-1] + C[i-1];
    }
    for(long i =1;i<=n;i++){
        dp[i][1] = cum[i];
    }
    for(long i=1;i<=k;i++){
        dp[1][i] = C[0];
    }
    for(long j=1;j<=k;j++){
        for(long i=2;i<=n;i++){
            long best = 1000;
            for(long x=1;x<=i;x++){
                best = min(best,max(dp[x][k-1],cum[i]-cum[x]));
            }
        dp[i][j] = best;
        }
        
    }
    return dp[n][k]*(long)B;
    
}

