int gcd(int A,int B){
    if(B==0){
        return A;
    }
    gcd(B,A%B);
}

int Solution::cpFact(int A, int B) {
    int max_num = 1;
    int count =1;
    while(A/count){
        if(A%count==0 && gcd(A/count,B)==1){
            max_num = max(max_num,A/count);
        }
        count++;
        
    }
    return max_num;
}