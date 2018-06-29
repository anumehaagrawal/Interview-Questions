vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    int num =0;
    while(num<A.size()-1){
        int temp = A[num];
        A[num]= A[num+1];
        A[num+1]=temp;
        num=num+2;
    }
    return A;
}