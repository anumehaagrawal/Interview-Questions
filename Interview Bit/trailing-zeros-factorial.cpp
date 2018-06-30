int Solution::trailingZeroes(int A) {
    if(A<5){
        return 0;
    }
    else{
        int num = 5;
        int result =0;
        while(num<=A){
            result = result + A/num;
            num = num*5;
        }
        return result;
    }
    
}
