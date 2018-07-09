void graycode(vector<int> &sol,int A){
    if(A==1){
        sol.push_back(0);
        sol.push_back(1);
        return;
    }
    graycode(sol,A-1);
    int num = 1<<A-1;
    for(int i=sol.size()-1;i>=0;i--){
        sol.push_back(num+sol[i]);
    }
    
}
vector<int> Solution::grayCode(int A) {
    vector<int> sol;
    graycode(sol,A);
    return sol;
}