vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    
           
    vector<int> v;
    deque<int> dq;
        
    for(int i=0; i<A.size(); i++)
    {
       if(!dq.empty() && dq.front()==i-B){
           dq.pop_front();
       }
       while(!dq.empty() && A[i]>=A[dq.back()]){
           dq.pop_back();
       }
       dq.push_back(i);
       if(i>=B-1 && !dq.empty()){
           v.push_back(dq.back());
       }
    }
    
return v;
}
