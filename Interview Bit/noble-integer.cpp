int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int flag=0;
    for(int i=0;i<A.size();i++){
        if((A.size()-1-i)==abs(A[i])){
            flag =1;
          
        }
    }
    if(flag==1){
        return 1;
    }
    else{
        return -1;
    }
}
