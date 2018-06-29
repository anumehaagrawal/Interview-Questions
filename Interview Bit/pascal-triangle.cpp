vector<vector<int> > Solution::generate(int A) {
    vector<vector<int> > result(A);
    for(int i=0;i<A;i++){
        if(i==0){
            result[0].push_back(1);
        }
        else{
            for(int j=i;j>=0;j--){
                if(j==i){
                    result[i].push_back(1);
                }
                else if(j==0){
                    result[i].push_back(1);
                }
                else{
                    result[i].push_back(result[i-1][j]+result[i-1][j-1]);
                }
                
            }
        }
    }
    return result;
}