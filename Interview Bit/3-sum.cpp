int Solution::threeSumClosest(vector<int> &A, int B) {
    int summ=0;
    int diff= INT_MAX;
    int l,r;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++){
        l= i+1;
        r= A.size()-1;
        while(l<r){
            int total = A[i]+A[l]+A[r];
            if(abs(total-B)<diff){
                diff= abs(total-B);
                summ = total;
            }
            if(total>B){
                r--;
            }
            else{
                l++;
            }
        }
    }
    return summ;
}
