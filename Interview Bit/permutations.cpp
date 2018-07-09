void swapnum(vector<vector<int> > &fin , vector<int>A,int index){
    if(index==A.size()-1){
        fin.push_back(A);
        return;
    }
    for(int i=index;i<A.size();i++){
        swap(A[i],A[index]);
        swapnum(fin,A,index+1);
        swap(A[i],A[index]);
    }
}
vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int> > fin;
    swapnum(fin,A,0);
    sort(fin.begin(),fin.end());
    return fin;
}

