int Solution::cntBits(vector<int> &A) {
    int val=0;
    int count;
    for(int j=0;j<32;j++){
        count =0;
        for(int i=0;i<A.size();i++){
            if(A[i] & (1<<j)){
                count++;
            }
        }
        val = (val + (count)*(A.size()-count)*2)%1000000007;
    }
    return val ;
}
