vector<int> Solution::dNums(vector<int> &A, int B) {
   auto n = A.size();
    vector<int> res;
    if(B>n){
        return res;
    }
    map<int, int> m;
    for (auto i = 0; i<n; ++i)
    {
        ++m[A[i]];
        
        if (i-B+1>=0)
        {
            res.emplace_back(m.size());
            --m[A[i-B+1]];
            if (m[A[i-B+1]] == 0)
                m.erase(A[i-B+1]);
        }
    }
return res;
}
