int Solution::titleToNumber(string A) {
    int n = A.length();

    int sums =0;
    
    for(int i=n-1;i>=0;i--){
        sums = sums+(pow(26,n-i-1)*(int(A[i])-64));
        
    }
    return int(sums);
    
    
}
