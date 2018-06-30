int Solution::reverse(int A) {
    long long int num =0;
    while(A!=0){
        num = num*10+(A%10);
        if(num<INT_MIN || num>INT_MAX){
        return 0;
    }
        A= A/10;
    }
    

    return num;
}
