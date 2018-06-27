bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
        sort(arrive.begin(), arrive.end());
        sort(depart.begin(), depart.end());
        int len, A, D, start, end;
        len = arrive.size();
        start = arrive[0];
        end = depart[len-1];
        A = D = 0;
        for (;start<=end;start++) {
               while((D<len)&&(start==depart[D])) {
                        K++;
                        D++;
                }
                while((A<len)&&(start==arrive[A])) {
                        if(K>0)
                            K--;
                        else
                            return false;
                        A++;
                }

        }
        return true;
    
}