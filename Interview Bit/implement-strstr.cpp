int Solution::strStr(const string A, const string B) {
    string main = A;
    string sub = B;
    for(int i=0;i<main.length();i++){
        int count=0;
        for(int j=0;j<sub.length();j++){
            if(i+j<main.length()){
                if(A[i+j]==B[j]){
                    count++;
                }
            }
        }
        if(count==B.length()){
            return i;
        }
    }
    return -1;
}
