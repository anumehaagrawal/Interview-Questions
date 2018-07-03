vector<vector<int> > Solution::threeSum(vector<int> &A) {
    set<vector<int> > sol;
    sort(A.begin(),A.end());
    vector<vector<int> > fin;
    
    if(A.size()<3){
        return fin;
    }
    for(int i=0;i<A.size()-1;i++){
        int l = i+1;
        int r = A.size()-1;
        int x = A[i];
        while(l<r){
            if(x+A[l]+A[r]==0){
            vector<int> v;
            v.push_back(x);
            v.push_back(A[l]);
            v.push_back(A[r]);
            
            sol.insert(v);
            
            l++;
            r--;
        }
        else if(x+A[l]+A[r]>0 ){
            r--;
        }
        else{
            l++;
        }
        
        }
        
    }
    
    set<vector<int>>::iterator it = sol.begin();
    while (it != sol.end())
        {
           fin.push_back(*it);
            it++;
        }
    if(fin.size()>0){
        return fin;
    }
    
}