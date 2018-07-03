void Solution::sortColors(vector<int> &A) {
    int c1 =0;
    int c2=0;
    int c3=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0){
            c1++;
        }
        else if(A[i]==1){
            c2++;
        }
        else{
            c3++;
        }
        
    }
    for(int i=0;i<c1;i++){
        A[i]=0;
    }
    for(int j=c1;j<c1+c2,j<A.size();j++){
        A[j]=1;
    }
    for(int i=c2;i<c2+c1+c3,i<A.size();i++){
        A[i]=2;
    }
    
}