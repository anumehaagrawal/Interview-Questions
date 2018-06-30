int Solution::repeatedNumber(const vector<int> &A) {
    int n1= INT_MAX;
    int n2= INT_MAX;
    int c1=0;
    int c2=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==n1 && c1>0){
            c1++;
        }
        else if(A[i]==n2 && c2>0){
            c2++;
        }
        else if(c1==0){
            n1= A[i];
            c1++;
        }
        else if(c2==0){
            n2= A[i];
            c2++;
        }
        else{
            c1--;
            c2--;
        }
    }
    if(c1==0 && c2==0){
        return -1;
    }
    c1=0;
    c2=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==n1){
            c1++;
        }
        if(A[i]==n2){
            c2++;
        }
        if(c1>A.size()/3){
            return n1;
        }
        if(c2>A.size()/3){
            return n2;
        }
    }
    return -1;
}
