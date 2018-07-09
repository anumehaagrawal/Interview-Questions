void comb(int A,int B,vector<int>& curr, vector<vector<int>>& final,int k){
    if(B==0){
        final.push_back(curr);
        return;
    }
    for(int i=k;i<=A;i++){
        curr.push_back(i);
        comb(A,B-1,curr,final,i+1);
        curr.pop_back();
    }
    
}
vector<vector<int> > Solution::combine(int A, int B) {
    vector<int> curr;
    vector<vector<int> > final;
    comb(A,B,curr,final,1);
    return final;
}
