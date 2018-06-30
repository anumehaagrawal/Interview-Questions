int gcdrecurse(int A,int B){
    if(B==0){
        return A;
    }
    return gcdrecurse(B,A%B);
}
int Solution::gcd(int A, int B) {
    if(A<B){
        int temp;
        temp=A;
        A=B;
        B=temp;
    }
    return gcdrecurse(A,B);
}
