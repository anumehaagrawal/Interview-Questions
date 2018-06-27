int Solution::maxArr(vector<int> &A) {
    int maxx= -999999;
    int minnum = 999999;
    int maxx1= -999999;
    int minnum1 = 999999;
    
    for(int i=0;i<A.size();i++){
        maxx=max(maxx,A[i]-i);
        maxx1 = max(maxx,A[i]+i);
        minnum = min(minnum,A[i]-i);
        minnum1=min(minnum1,A[i]+i);
        
    }
    
    
    return max((maxx-minnum),(maxx1-minnum1));
}