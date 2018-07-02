int Solution::solve(string A) {
    int start =0;
    int end = A.length()-1;
    int temp_end=end;
    while(start<=temp_end){
        if(A[start]==A[temp_end]){
            start++;
            temp_end--;
        }
        else{
            start=0;
            temp_end = --end;
        }
    }
    return A.length()-(end)-1;
    
    
}