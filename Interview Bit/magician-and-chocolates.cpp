int Solution::nchoc(int A, vector<int> &B) {
    priority_queue<int> pq;
    for(int i=0;i<B.size();i++){
        pq.push(B[i]);
    }
    long long summ =0;
    while(A-- && !pq.empty()){
        int a = pq.top();
        pq.pop();
        summ = (summ+a)%1000000007;
        if(a/2>0){
            pq.push(a/2);
        }
    }
    return summ;
}
