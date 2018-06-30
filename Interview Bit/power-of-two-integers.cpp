int Solution::isPower(int A) {
    if(A==1){
        return 1;
    }
    else{
        for(int i=2;i<=sqrt(A);i++){
            int num = 2;
            while(pow(i,num)<=A){
                if(pow(i,num)==A){
                    return 1;
                }
                num++;
                
            }
        }
    }
    return 0;
}
