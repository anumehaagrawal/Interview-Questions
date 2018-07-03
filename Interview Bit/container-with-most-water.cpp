int Solution::maxArea(vector<int> &A) {
    int maxa =0;
    int l=0;
    int r= A.size()-1;
    while(l<r){
        maxa=max(maxa,min(A[l],A[r])*(r-l));
        if(A[l]<A[r]){
            l++;
        }
        else{
            r--;
        }
    }
    return maxa;
}
