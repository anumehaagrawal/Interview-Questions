int Solution::diffPossible(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int l=0;
    int r=A.size()-1;
    for(int i=0;i<A.size()-1;i++){
        for(int j=i+1;j<A.size();j++){
            if(A[j]-A[i]==B){
                return 1;
            }
        }
    }
    return 0;
}
