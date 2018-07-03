string Solution::convert(string A, int B) {
    string *str = new string[B];
    if(B<=1){
        return A;
    }
    int n = A.length();
    int row =0;
    int flag =1;
    for(int i=0;i<n;i++){
        str[row].push_back(A[i]);
        if(row==B-1 ){
            flag=0;
        }
        if(row==0){
            flag=1;
        }
        if(flag){
            row++;
        }
        else{
            row--;
        }
    }
    A.clear();
    for(int i=0;i<B;i++){
        A.append(str[i]);
    }
    return A;
}