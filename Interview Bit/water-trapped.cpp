int Solution::trap(const vector<int> &A) {
    vector<int> left(A.size());
    vector<int> right(A.size());
    left[0]=A[0];
    for(int i=1;i<A.size();i++){
        left[i]=max(left[i-1],A[i]);
    }
    right[A.size()-1]=A[A.size()-1];
    for(int i=A.size()-2;i>=0;i--){
        right[i]=max(right[i+1],A[i]);
    }
    int result =0;
    for(int i=0;i<A.size();i++){
        result = result + min(left[i],right[i])-A[i];
    }
    return result;
}
