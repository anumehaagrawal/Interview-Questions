int Solution::hammingDistance(const vector<int> &A) {
    int val =0;
    for(int i=0;i<32;i++){
        int count =0;
        for(int j=0;j<A.size();j++){
            if(A[j] & 1<<i){
                count++;
            }
        }
        val = (val+(A.size()-count)*count*2)%1000000007;
    }
    return val;
}
