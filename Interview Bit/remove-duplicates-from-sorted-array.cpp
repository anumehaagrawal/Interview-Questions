int Solution::removeDuplicates(vector<int> &A) {
    int j=1;
    
    for(int i=1;i<A.size();i++){
        if(A[i]==A[i-1]){
            continue;
        }
        else{
            A[j]=A[i];
            j++;
        }
    }
    for(int k=A.size()-1;k>=j;k--){
        A.pop_back();
    }
    return j;
}
