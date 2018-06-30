int findpath(int A,int B){
    if(A==1 || B==1){
        return 1;
    }
    else{
        return findpath(A-1,B)+findpath(A,B-1);
    }
}
int Solution::uniquePaths(int A, int B) {
    
    return findpath(A,B);
}
