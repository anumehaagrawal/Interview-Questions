vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long sum=0,sumsq=0;
    vector<int>v;
    for(long long i=0;i<A.size();i++)
    {
        sum+=A[i]-(i+1);
        sumsq+=(long long)A[i]*(long long)A[i]-(i+1)*(i+1);
    }
    long long a= ((sumsq/sum)+sum)/2;
    long long b=a-sum;
        v.push_back(a);
        v.push_back(b);
return v;
}
