int Solution::isPalindrome(int A) {
    int num=0;
    long long int copy = A;
    while(copy>0){
        num = num*10 +copy%10;
        copy = copy /10;
        cout<<num<<endl;
    }
    if(copy==A){
        return 1;
    }
    return 0;
}
