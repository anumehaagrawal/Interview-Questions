int Solution::maximumGap(const vector<int> &A) {
    int maxx =0;
    int res = 0;
 
    for(int i=0;i<A.size()-1;i++)
    {
        for(int j=A.size()-1;j>=i+res;j--){
            if(A[j]>=A[i]){
               
                res = max(res,j-i);
                break;
            }
        }
    }
    return res;
    
}
